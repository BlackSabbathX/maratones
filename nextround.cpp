#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, k, t, index = 1, p = 0;
    cin >> n >> k;
    while (index <= k) {
        cin >> t;
        index++;
        if (t > 0) p++;
    }
    bool sw = t > 0;
    if (sw) p--;
    int s = t;
    while (index <= n && sw && t == s) {
        cin >> t;
        index++;
        p++;
    }
    while (index <= n) {
        cin >> t;
        index++;
    }
    if (s == t && s != 0) p = index - 1;
    cout << p << endl;
    return 0;
}