#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (int x = 1; x <= 20; x++)
	{
		printf("%5d", 1 + rand() % 6);
		if (x % 5 == 0)
		{
			printf("\n");
		}
	}
	
	return 0;
}