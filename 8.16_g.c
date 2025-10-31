#include <stdio.h>

int is_eq(int A1[], int A2[], int k)
{
	int result = 1;
	for (int i = 0; i < k; ++i)
		if (A1[i] != A2[i]){
			result = 0;
			break;
		}
	return result;
}

int main()
{
	const int n = 100;
	int x[n], y[n], z[n];
	for (int i = 0; i < n; i++) x[i] = y[i] = z[i] = 1; // Для примера, пусть x, y поэлементно равны, а x, z - нет
	z[0] = 0;
	printf("x == y? -> eq = %d\n", is_eq(x, y, n));
	printf("x == z? -> eq = %d\n", is_eq(x, z, n));
	return 0;
}
