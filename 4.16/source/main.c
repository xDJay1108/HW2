#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("(A)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j <= i)
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}

	printf("\n(B)\n");
	for (int i = 10; i > 0; i--)
	{
		for (int j = 10; j > 0; j--)
		{
			if (j <= i)
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}

	printf("\n(C)\n");
	for (int i = 10; i > 0; i--)
	{
		for (int j = 0; j < (10 - i); j++)
		{
			printf(" ");
		}
		for (int j = 10; j > 0; j--)
		{
			if (j <= i)
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}

	printf("\n(D)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < (9 - i); j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 10; j++)
		{
			if (j <= i)
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}