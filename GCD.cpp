#include <stdio.h>
#include <vector>

int GCD(long a, long b) {
    long auxiliar;
    do {
        auxiliar = b;
        b = a % b;
        a = auxiliar;
    } while (b != 0);
    return a;
}

int main() {
    std::vector<long> vector;
    long n = 1;
    while (n != 0) {
        long G = 0;
        scanf("%d", &n);
        if (n == 0)
            break;
        for (long i = 1; i < n; i++) {
            for (long j = i + 1; j <= n; j++) {
                G += GCD(i, j);
            }
        }
        vector.push_back(G);
    }
    for (int r : vector) {
        printf("%d\n", r);
    }
    return 0;
}