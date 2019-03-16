#include <iostream>

using namespace std;

int readAndSumN(int n) {
    int tot = 0;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        tot += temp;
    }
    return tot;
}

double percentageOf() {
    int n;
    cin >> n;
    int tot = readAndSumN(n);
    return (1.0000000 * tot) / (1.0000000 * n);
}

int main() {
    cout.precision(7);
    cout << percentageOf();
    return 0;
}