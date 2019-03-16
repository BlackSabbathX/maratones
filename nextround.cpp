#include "stdio.h"

int main() {
    int t, m, index = 0, n, k;
    scanf("%d %d", &n, &k);
    while (index <= n) {
        scanf("%d", &t);
        index++;
        if (index == k) {
            if (t <= 0) {
                printf("0\n");
                return 0;
            }
            m = t;
            while (t == m) {
                scanf("%d", &t);
                index++;
            }
            index--;
            printf("%d\n", index);
            return 0;
        }
    }
    return 0;
}