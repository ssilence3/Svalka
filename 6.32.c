#include <stdio.h>
int main()
{
	int a, max = -1, number = 0;
	while ((a = getchar()) != EOF && a != '\n' && a != '.')
	{
		while (a != ' ' && a != '\n')
		{
			if ('0' <= a && a <= '6') number = number*10 + a - '0';
			else
			{
				number = -1;
				break;
			}
			a = getchar();
		}
		if (max < number) max = number;
		number = 0;
	}
	if (max == -1) printf("There isn't non-negative base-7 number in sequence");
	else
	{
		while (max != 0)
		{
			number *= 7;
			number += max % 10;
			max /= 10;
		}
		printf("maximum = %d\n", number);
	}
	return 0;
}
