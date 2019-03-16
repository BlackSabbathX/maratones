#include <iostream>

using namespace std;

int maxSegment() {
    int s;
    int nm1;
    int nm2;
    int n;
    cin >> n;
    int sm = n == 1 ? 1 : 2;
    int *a = new int[n];
    bool inSerie = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 1) {
            if (a[i] == a[i - 1] + a[i - 2]) {
                if (!inSerie) {
                    inSerie = true;
                    s = 3;
                } else {
                    s++;
                }
            } else {
                if (s > sm)
                    sm = s;
                inSerie = false;
                s = 0;
            }
        }
    }
    if (s > sm)
        sm = s;
    return sm;
}

int main() {
    cout << maxSegment();
    return 0;
}