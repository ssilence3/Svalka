#include <stdio.h>
int main()
{
	int c1, c2, a, counter = 0;
	while ((a = getchar()) != EOF && a != '\n')
	{
		if (c1 == 2 && c2 && a == 'c')
		{
			counter += 1;
			c1 = 0;
			c2 = 0;
		}
		else if (c1 == 1 && a == 'b')
		{
			c2 = 1;
			c1 += 1;
		}
		else if (a == 'a')
		{
			c1 = 1;
			c2 = 0;
		}
		else
		{
			c1 = 0;
			c2 = 0;
		}
	}
	printf("%d\n", counter);
	return 0;
}
