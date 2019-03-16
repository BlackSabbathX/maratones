#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int *results = new int[n];
    for (int i = 0; i < n; i++) {
        int r1, r2, r3;
        scanf("%d %d %d", &r1, &r2, &r3);
        if ((r1 < r2 && r1 > r3) || (r1 > r2 && r1 < r3))
            results[i] = r1;
        else if ((r2 < r1 && r2 > r3) || (r2 > r1 && r2 < r3))
            results[i] = r2;
        else if ((r3 < r1 && r3 > r2) || (r3 > r1 && r3 < r2))
            results[i] = r3;
    }
    for (int i = 1; i <= n; i++) {
        printf("Case %d: %d\n", i, results[i - 1]);
    }
    return 0;
}