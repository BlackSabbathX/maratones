#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

struct Watchmen {
    const int x, y;
    const int pos;

    Watchmen(const int x, const int y, const int pos) : pos(pos), x(x), y(y) {};

    bool operator<(const Watchmen &w2) {
        if (this->x == w2.x) {
            if (this->y == w2.y) return this->pos < w2.pos;
            return this->y < w2.y;
        }
        return this->x < w2.x;
    };
};

struct by_x {
    inline bool operator()(const Watchmen *w1, const Watchmen *w2) {
        return w1->x < w2->x;
    }
};

struct by_y {
    inline bool operator()(const Watchmen *w1, const Watchmen *w2) {
        return w1->y < w2->y;
    }
};

int main() {
    ios::sync_with_stdio(false);
    int n, x, y, ind;
    vector<Watchmen *> ws;
    set<pair<Watchmen *, Watchmen *>> ms;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        Watchmen *w = new Watchmen(x, y, i);
        ws.emplace_back(w);
    }
    sort(ws.begin(), ws.end(), by_x());
    for (int j = 0; j < n; j++) {
        ind = j + 1;
        while (ind < n && ws[j]->x == ws[ind]->x) {
            ms.emplace(make_pair(ws[j], ws[ind]));
            ind++;
        }
    }
    sort(ws.begin(), ws.end(), by_y());
    for (int k = 1; k < n; k++) {
        ind = k + 1;
        while (ind < n && ws[k]->y == ws[ind]->y) {
            ms.emplace(make_pair(ws[k], ws[ind]));
            ind++;
        }
    }
    cout << ms.size() << endl;
    return 0;
}