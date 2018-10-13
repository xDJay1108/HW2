#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length, breadth;

	printf("length:");
	scanf_s("%d", &length);
	printf("breadth:");
	scanf_s("%d", &breadth);

	for (int i = 0; i < length; i++)
	{
		if ((i == 0) || (i == (length - 1)))
		{
			for (int j = 0; j < breadth; j++)
			{
				printf("+");
			}
		}
		else
		{
			for (int j = 0; j < breadth; j++)
			{
				if ((j == 0) || (j == (breadth - 1)))
				{
					printf("+");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}