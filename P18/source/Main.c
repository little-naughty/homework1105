#include<stdio.h>
#include<string.h>

int main()
{
	char string1[60] = "welcome";
	char string2[60];
	int len;

	strcpy(string2, string1);

	len = strlen(string2);

	printf("string2=%s\n\n", string2);

	printf("¦r¦êªø«×¬°¡G%d\n", len);

	return 0;
}