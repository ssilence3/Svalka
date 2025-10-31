#include <stdio.h>
#include <ctype.h>

int max_min()
{
	int x, y, z;
	x = getchar();
	if (isdigit(x)) return x - '0';
		if (x == 'M')
		{
			x = getchar();
			y = max_min();
			x = getchar();
			z = max_min();
			x = getchar();
			return y < z ? z : y;
		}
		else
		{
			x = getchar();
			y = max_min();
			x = getchar();
			z = max_min();
			x = getchar();
			return y < z ? y : z;
		}
}
int main()
{
	printf("%d \n", max_min());
	return 0;
}

