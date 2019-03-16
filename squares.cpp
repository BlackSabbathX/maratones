#include <iostream>
#include <cmath>

using namespace std;

int nSquares(int n) {
    int s;
    int newN;
    int tot = 0;
    do {
        newN = sqrt(n);
        s = n - (newN * newN);
        tot++;
        n = s;
    } while (s != 0);
    return tot;
}

void squaresFor(int n) {
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << nSquares(a[i]) << endl;
    }
}

int main() {
    int n;
    cin >> n;
    squaresFor(n);
    return 0;
}