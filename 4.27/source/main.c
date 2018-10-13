#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int side1, side2, hypotenuse;

	for (side1 = 1; side1 <= 500; side1++)
	{
		for (side2 = side1+1; side2 <= 500; side2++)
		{
			for (hypotenuse = side2 + 1; hypotenuse <= 500; hypotenuse++)
			{
				if (hypotenuse*hypotenuse == side1*side1 + side2*side2)
				{
					printf("%d\t%d\t%d\n", side1, side2, hypotenuse);
				}
			}
		}
	}

	system("pause");
	return 0;
}