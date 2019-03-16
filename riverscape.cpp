#include <iostream>

using namespace std;

void calcTidePeriod() {
    int n;
    int p;
    cin >> n >> p;
    char *s = new char[n];
    bool is = true;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        if (i >= p) {
            int pos = i % p;
            char ch = s[i];
            if (s[pos] == '.') {
                if (ch != '.') {
                    for (int j = i; j >= 0; j -= p)
                        s[j] = ch;
                }
            } else if (ch != s[pos]) {
                if (ch == '.') {
                    s[i] = s[i % p];
                } else {
                    is = false;
                }
            }
        }
        if ((n / 2) < p && s[i] == '.') {
            s[i] = '0';
        }
    }
    if (is)
        cout << "No" << endl << s;
    else
        cout << s;
}

int main() {
    calcTidePeriod();
    return 0;
}