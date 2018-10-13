#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < 5 - (i + 1);j++)
		{
			printf(" ");
		}
		for (int j = 0; j < (2*(i+1)-1); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 4; i > 0; i--)
	{
		for (int j = 5 - i ; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = (2 * i - 1); j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}