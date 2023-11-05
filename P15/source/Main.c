#include<stdio.h>
#include<math.h>

int main()
{
	int x, y, z;

	printf("Enter three number¡G");
	scanf("%d%d%d", &x, &y, &z);

	int max = x;
	if (y > max)
	{
		max = y;
	}
	else if (z > max)
	{
		max = z;
	}
	printf("Maximum is¡G%d", max);

	return 0;
}