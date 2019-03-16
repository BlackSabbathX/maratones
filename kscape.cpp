#include <stdio.h>

int main() {
    int n;
    int ax, ay, bx, by, cx, cy;
    scanf("%d", &n);
    scanf("%d %d", &bx, &by);
    scanf("%d %d", &ax, &ay);
    scanf("%d %d", &cx, &cy);
    if (
            (ax < bx && cx < bx && ay < by && cy < by) ||
            (ax > bx && cx > bx && ay > by && cy > by) ||
            (ax > bx && cx > bx && ay < by && cy < by) ||
            (ax < bx && cx < bx && ay > by && cy > by)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}