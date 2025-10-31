#include <stdio.h>

int sum_g(int A[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) sum += A[i]*A[n-1-i];
	return sum;
}

int main()
{
	int x[3] = {1, 2, 3};
	printf("%d \n", sum_g(x, 3));
	return 0;
}
