#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int type=0;
	float salary;
	float managers_fixed_weekly;
	int hours;
	float rate;
	float sales;
	float one_item;
	int items;

	while (1)
	{
		printf("Enter the type of employee (-1 to end):\n");
		printf("1:Managers\n2:Hourly workers\n3:Commission workers\n4:Pieceworkers\n");
		scanf_s("%d", &type);
		if (type == -1) break;
		else
		{
			switch (type)
			{
			case 1:
				printf("Enter the manager's fixed weekly salary:");
				scanf_s("%f", &managers_fixed_weekly);
				salary = managers_fixed_weekly;
				printf("The manager's salary is:%.2f\n", salary);
				break;
			case 2:
				printf("Enter hours that the hourly workers worked:");
				scanf_s("%d", &hours);
				printf("Enter hourly rate of the hourly worker ($00.00):");
				scanf_s("%f", &rate);
				if (hours <= 40)
				{
					salary = hours*rate;
				}
				else
				{
					salary = 40 * rate + (hours - 40)*1.5*rate;
				}
				printf("The hourly worker's salary is $%.2f\n", salary);
				break;
			case 3:
				printf("Enter the commission worker's sales in dollars:");
				scanf_s("%f", &sales);
				salary = 250 + sales*0.057;
				printf("The commission worker's salary is:%.2f\n", salary);
				break;
			case 4:
				printf("Enter the money that the pieceworker produced one item will receive:");
				scanf_s("%f", &one_item);
				printf("Enter the amount that the pieceworker produced:");
				scanf_s("%d", &items);
				salary = one_item*items;
				printf("The pieceworker's salary is:%.2f\n", salary);
				break;
			}
		}
		printf("\n");
	}
	return 0;
}