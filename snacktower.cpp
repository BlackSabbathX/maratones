#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, t, wait, b;
    cin >> n;
    wait = n;
    int *input = new int[n];
    vector<int> temp;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        input[i] = t;
    }
    for (int i = 0; i < n; ++i) {
        t = input[i];
        if (t == wait) {
            sort(temp.begin(), temp.end());
            cout << t << " ";
            bool sw = temp.empty();
            if (!sw) b = temp.back();
            while (--t == b && b != 0) {
                cout << b << " ";
                if (!sw) {
                    temp.pop_back();
                    b = temp.back();
                }
            }
            cout << endl;
            wait = t;
        } else {
            temp.emplace_back(t);
            cout << endl;
        }
    }
    return 0;
}