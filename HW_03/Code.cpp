#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int n, sum = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int input;
		scanf_s("%d", &input);
		if (input < 0)
			sum += input;
	}
	printf("Sum: %d", sum);
	return 0;
}