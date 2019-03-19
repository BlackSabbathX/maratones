#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m, k, p1, p2, bone = 0, temp;
    cin >> n >> m >> k;
    bool holes[n];
    for (int l = 0; l < n; l++) holes[l] = false;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        holes[temp - 1] = true;
    }
    bool inhole = holes[bone];
    for (int j = 0; j < k; j++) {
        cin >> p1 >> p2;
        p1--;
        p2--;
        if (!inhole) {
            if (bone == p1) {
                bone = p2;
                inhole = holes[p2];
            } else if (bone == p2) {
                bone = p1;
                inhole = holes[p1];
            }
        }
    }
    cout << (bone + 1) << endl;
    return 0;
}