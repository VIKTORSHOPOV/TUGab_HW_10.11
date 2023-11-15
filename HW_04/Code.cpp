#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int n, count = 0;
	scanf_s("%d", &n);
	int input;
	scanf_s("%d", &input);
	int old = (input < 0) ? -1 : 1;

	for (int i = 0; i < n - 1; i++)
	{
		scanf_s("%d", &input);
		int now = (input < 0) ? -1 : 1;

		if (now != old)
		{
			count++;
		}

		old = now;
	}

	printf("Count: %d\n", count);
	return 0;
}
