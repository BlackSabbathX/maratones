#include <stdio.h>
#include <vector>
#define squares(n) ((n * (n + 1) * ((2 * n) + 1)) / 6)

int main()
{
	std::vector<int> results;
	int n = 1;
	while (n != 0)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		results.push_back(squares(n));
	}
	for (int r : results)
	{
		printf("%d\n", r);
	}
	return 0;
}