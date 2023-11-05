#include<stdio.h>
#include<math.h>

int main()
{
	double x, ans, n;
	
	printf("請輸入要次方的底數：");
	scanf("%lf", &x);
	printf("請輸入要次方的次數：");
	scanf("%lf", &n);

	ans = pow(x, n);

	printf("%lf", ans);

	return 0;
}