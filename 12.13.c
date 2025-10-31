#include <stdio.h>
double sum()
{
	double a;
	scanf("%lf", &a);
	return (a > 0) ? a + sum() : 0;
}
int main()
{
	printf("%lf \n", sum());
}
