#include <stdio.h>
double H(double x, int n)
{ 
	return (n == 0) ? 1 : (x/n)*(H(x, n-1));
}

int main()
{
	printf("%f \n", H(4, 3));
}
