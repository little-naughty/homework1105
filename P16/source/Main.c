#include<stdio.h>
#include<math.h>

int main()
{
	int x;

	for (x = 1; x <= 10; x++)
	{
		printf("%.2f ", sqrt(x));
	}
	printf("\n");

	return 0;
}