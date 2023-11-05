#include<stdio.h>

long factorial(long);

int main()
{
	for (int x = 0; x <= 10; x++)
	{
		printf("%2d! = %d\n", x, factorial(x));
	}

	return 0;
}
long factorial(y)
{
	if (y <= 1)
	{
		return 1;
	}
	else
	{
		return y * factorial(y - 1);
	}
}