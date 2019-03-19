#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, k1, k2, temp;
    vector<int> c1, c2;
    cin >> n;
    cin >> k1;
    for (int i = 0; i < k1; ++i) {
        cin >> temp;
        c1.emplace_back(temp);
    }
    cin >> k2;
    for (int j = 0; j < k2; ++j) {
        cin >> temp;
        c2.emplace_back(temp);
    }
    for (int k = 0; k < 110; k++) {
        if (c1.empty()) {
            cout << k << " 2" << endl;
            return 0;
        } else if (c2.empty()) {
            cout << k << " 1" << endl;
            return 0;
        }
        if (c1[0] > c2[0]) {
            c1.emplace_back(c2[0]);
            c1.emplace_back(c1[0]);
            c1.erase(c1.begin());
            c2.erase(c2.begin());
        } else {
            c2.emplace_back(c1[0]);
            c2.emplace_back(c2[0]);
            c1.erase(c1.begin());
            c2.erase(c2.begin());
        }
    }
    cout << (-1) << endl;
    return 0;
}