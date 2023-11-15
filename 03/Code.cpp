#include <iostream>
#include <stdio.h>
#include <math.h>
//Block Scheme -> https://ctrl.vi/i/thU7cdTPb
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d", i);
	}
	puts("");
	for (int i = n; i >= 1; i--)
	{
		printf("%d", i);
	}
}