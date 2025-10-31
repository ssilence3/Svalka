#include <stdio.h>

int sum(int A[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) sum += i % 2 == 0 ? A[i]*A[i] : 0; // Я беру четные индексы, т. к. в языке C индексирование элементов в массиве начинается с нуля
	return sum;
}

int main()
{
	int x[3] = {1, 2, 3};
	printf("%d \n", sum(x, 3));
	return 0;
}
