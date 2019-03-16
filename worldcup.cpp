#include <iostream>
#include <cmath>

using namespace std;

void round()
{
    int n;
    int a;
    int b;
    cin >> n >> a >> b;
    int finalRound = log2(n);
    int round = 0;
    a--;
    b--;
    while (a != b)
    {
        a /= 2;
        b /= 2;
        round++;
    }
    if (round == finalRound)
    {
        cout << "Final!";
    }
    else
    {
        cout << round;
    }
}

int main()
{
    round();
    return 0;
}