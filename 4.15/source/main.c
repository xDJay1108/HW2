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
		printf("���� $5000�A�~�Q�v%.1f%%�A�g�L15�~�A�̲��`���B�� $%.2f\n", rate, principal);
		principal = 5000.00;
	}

	system("pause");
	return 0;
}