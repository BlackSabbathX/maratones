#include <stdio.h>
#include <vector>

bool contains(std::vector<int> vector, int val) {
    for (int v : vector)
        if (v == val)
            return true;
    return false;
}

int main() {
    int k, n;
    scanf("%d %d", &k, &n);
    int *codes = new int[k];
    for (int i = 0; i < k; i++)
        scanf("%d", &codes[i]);
    for (int i = 0; i < k; i++) {
        std::vector<int> temp;
        std::vector<int> pos;
        temp.push_back(codes[i]);
        pos.push_back(i);
        for (int j = i + 1; j < k; j++) {
            if (!contains(temp, codes[j])) {
                temp.push_back(codes[j]);
                pos.push_back(j);
                if (temp.size() == n)
                    break;
            }
        }
        if (temp.size() == n) {
            printf("YES\n");
            for (int p : pos)
                printf("%d ", (p + 1));
            return 0;
        }
    }
    printf("NO");
    return 0;
}
