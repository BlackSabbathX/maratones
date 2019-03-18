#include <iostream>

#define max(a, b) a > b ? a : b;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    const long alen = a.length();
    const long blen = b.length();
    if (alen == blen) {
        if (a == b) cout << -1 << endl;
        else cout << alen << endl;
    } else {
        long max = max(alen, blen);
        cout << max << endl;
    }
    return 0;
}