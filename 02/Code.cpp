#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int input;
	int mult = 1;
	scanf_s("%d", &input);
	while (input != 0)
	{
		if (input > 0)
			mult *= input;
		scanf_s("%d", &input);
	}
	printf("Sum: %d", mult);
}