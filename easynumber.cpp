#include <iostream>

using namespace std;

int main()
{
    int n;
    int tot = 0;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i << " es" << endl;
            tot++;
        }
    }
    cout << "TIENE: " << tot;
    return 0;
}