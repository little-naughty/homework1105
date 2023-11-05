#include<stdio.h>
#include<stdlib.h>

int main()
{
	int seed;
	
	printf("Enter seed¡G");
	scanf("%d", &seed);

	srand(seed);

	for (int x = 1; x <= 10; x++)
	{
		printf("%5d", 1 + rand() % 6);
		if (x % 5 == 0)
		{
			printf("\n");
		}
	}


	return 0;
}