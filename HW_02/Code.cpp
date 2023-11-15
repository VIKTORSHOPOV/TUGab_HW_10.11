#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	
	for (a = 1; a < 100; a++)
	{
		for (b = a; b < 100; b++)
		{
			c = (int)sqrt(a * a + b * b);
			if (c < 100 && c * c == a * a + b * b)
			{
				printf("%d, %d, %d\n", a, b, c);
			}
		}
	}
	return 0;
}
