#include <iostream>

#define MAX(a, b) (a > b ? a : b)

using namespace std;

int nBooks() {
    int n;
    int t;
    cin >> n >> t;
    int *nu = new int[n];
    int nm = 0;
    int time = t;
    int nb = 0;
    for (int i = 0; i < n; i++) {
        cin >> nu[i];
        if (nu[i] <= time) {
            nb++;
            time -= nu[i];
            if (time == 0) {
                time = t;
                nm = MAX(nm, nb);
                if (i > 1 && (nu[i - 2] + nu[i - 1] + nu[i]) <= time) {
                    nb = 3;
                    time -= (nu[i - 2] + nu[i - 1] + nu[i]);
                } else if (i > 0 && (nu[i - 1] + nu[i]) <= time) {
                    nb = 2;
                    time -= nu[i - 1] + nu[i];
                } else if (nu[i] <= time) {
                    nb = 1;
                    time -= nu[i];
                } else {
                    nb = 0;
                }
            }
        } else {
            time = t;
            nm = MAX(nm, nb);
            if (i > 1 && (nu[i - 2] + nu[i - 1] + nu[i]) <= time) {
                nb = 3;
                time -= (nu[i - 2] + nu[i - 1] + nu[i]);
            } else if (i > 0 && (nu[i - 1] + nu[i]) <= time) {
                nb = 2;
                time -= (nu[i - 1] + nu[i]);
            } else if (nu[i] <= time) {
                nb = 1;
                time -= nu[i];
            } else {
                nb = 0;
            }
        }
        // while (j <= i && time + nu[j] <= t)
        // {
        //     nB++;
        //     time += nu[j];
        //     j--;
        // }
        // if (nB > nM)
        // {
        //     nM = nB;
        // }
    }
    nm = MAX(nm, nb);
    return nm;
}

int main() {
    cout << nBooks();
    return 0;
}