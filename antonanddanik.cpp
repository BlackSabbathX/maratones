#include <iostream>

using namespace std;

string getWinner() {
    int n;
    int a = 0;
    int d = 0;
    cin >> n;
    string winners;
    cin >> winners;
    for (int i = 0; i < n; i++) {
        if (winners[i] == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        return "Anton";
    else if (d > a)
        return "Danik";
    else
        return "Friendship";
}

int main()
{
    cout << getWinner();
    return 0;
}