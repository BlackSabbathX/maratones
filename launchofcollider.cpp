#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, pos, apos, time;
    bool col = false;
    cin >> n;
    char moves[n];
    cin >> moves;
    cin >> apos;
    for (int i = 1; i < n; ++i) {
        cin >> pos;
        if (moves[i] != moves[i - 1] && moves[i] == 'L') {
            if (!col || (pos - apos) / 2 < time) time = (pos - apos) / 2;
            col = true;
        }
        apos = pos;
    }
    if (col) cout << time << endl;
    else cout << (-1) << endl;
    return 0;
}