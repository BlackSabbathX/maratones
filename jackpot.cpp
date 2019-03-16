#include <stdio.h>
#include <vector>

struct Result
{
    int mStreak;
    int total;
};

int main()
{
    int n;
    std::vector<Result> results;
    scanf("%d", &n);
    while (n != 0)
    {
        int val, wStreak = 0;
        Result r = {0, 0};
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &val);
            r.total += val;
            if (val >= 0)
                wStreak += val;
            else
            {
                if (wStreak > r.mStreak)
                    r.mStreak = wStreak;
                wStreak = 0;
            }
        }
        if (wStreak > r.mStreak)
            r.mStreak = wStreak;
        scanf("%d", &n);
        results.push_back(r);
    }
    for (Result r : results)
    {
        if (r.total > 0)
            printf("The maximun winning streak is %d.\n", r.mStreak);
        else
            printf("Lossing streak.\n");
    }
    return 0;
}