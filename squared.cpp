#include <stdio.h>

void eratosthenes(bool *vector, int n) {
    for (int i = 0; i < n; i++)
        vector[i] = true;
    if (n > 1) {
        vector[0] = false;
        vector[1] = false;
    } else if (n > 0)
        vector[0] = false;
    for (int i = 2; i * i <= n; i++)
        if (vector[i])
            for (int j = 2; i * j <= n; j++)
                vector[i * j] = false;
}

int main() {
    int n;
    int a, b, m = 0;
    scanf("%d", &n);
    int *results = new int[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        results[i] = (a * a) - (b * b);
        if (results[i] > m)
            m = results[i];
    }
    bool *primes = new bool[m + 1];
    eratosthenes(primes, m);
    for (int i = 0; i < n; i++) {
        if (primes[results[i]])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}