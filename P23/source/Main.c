#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rolldices();
enum status {Continue, win, lost};

int main()
{
	int sum, point;
	enum status gamestatus;

	srand(time(NULL));

	sum = rolldices();

	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = win;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = lost;
		break;
	default:
		gamestatus = Continue;
		point = sum;
		printf("Point is¡G%d\n", point);
		break;
	}
	while (gamestatus == Continue)
	{
		sum = rolldices();
		if (sum == point)
		{
			gamestatus = win;
		}
		else if(sum == 7)
		{
			gamestatus = lost;
		}	
	}
	if (gamestatus == win)
	{
		printf("Player wins\n");
	}
	else
	{
		printf("Player loses\n");
	}

	return 0;
}

int rolldices()
{
	int dice1;
	int dice2;
	int rollsum;

	dice1 = 1 + rand() % 6;
	dice2 = 1 + rand() % 6;
	rollsum = dice1 + dice2;
	printf("Player rolled %d + %d = %d\n", dice1, dice2, rollsum);
	return rollsum;

}