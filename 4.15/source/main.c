#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float principal = 5000.00;
	int years = 15;
	float rate = 10.0;

	for (rate = 10.0; rate <= 12.0; rate = rate+0.5)
	{
		for (int i = 0; i < 15; i++)
		{
			principal = principal + principal * (rate / 100);
			
		}
		printf("本金 $5000，年利率%.1f%%，經過15年，最終總金額為 $%.2f\n", rate, principal);
		principal = 5000.00;
	}

	system("pause");
	return 0;
}