#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	float beginning_balance, charges, credits, limit, balance;

	while (1)
	{
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &number);
		if (number == -1) break;
		else
		{
			printf("Enter beginning balance:");
			scanf_s("%f", &beginning_balance);
			printf("Enter total charges:");
			scanf_s("%f", &charges);
			printf("Enter total credits:");
			scanf_s("%f", &credits);
			printf("Enter credit limit:");
			scanf_s("%f", &limit);
			balance = beginning_balance + charges - credits;
			if (balance > limit)
			{
				printf("Account:\t%d\n", number);
				printf("Credit limit:\t%.2f\n", limit);
				printf("Balance:\t%.2f\n", balance);
				printf("Credit Limit Exceeded.\n");
			}
		}
		printf("\n");
	}
	return 0;
}