#include <iostream>
#define timeForNProblems(n) (5 * ((n * (n + 1)) / 2))

using namespace std;

int calcNProblems() {
    int n;
    int k;
    cin >> n >> k;
    int tfp = 240 - k;
    for (int p = n; p > 0; p--){
        if (timeForNProblems(p) <= tfp) {
            return p;
        }
    }
    return 0;
}

int main() {
    int np = calcNProblems();
    cout << np << endl;
    return 0;
}