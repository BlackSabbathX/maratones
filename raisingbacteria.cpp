#include <iostream>
#include <math.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x, tot = 0;
    cin >> x;
    while (x > 0) {
        tot++;
        x -= pow(2, floor(log2(x)));
    }
    cout << tot << endl;
    return 0;
}