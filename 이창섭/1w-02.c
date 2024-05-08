#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS

int main(void)
{
	int star, i, j, k;
	scanf_s("%d", &star); //star=5대입
	for (i = 1; i <= star; i++) //1<=5 ->{}실행후 i=2
	{
		for (j = 1; j <= star - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
