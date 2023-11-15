#include <iostream>
#include <stdio.h>
#include <math.h>
//Block scheme -> https://ctrl.vi/i/jJ9GLXXua
int main()
{
	int input;
	int sum = 0;
	scanf_s("%d", &input);
	while (input != 0)
	{
		sum += input;
		scanf_s("%d", &input);
	}
	printf("Sum: %d", sum);
}