#include <stdio.h>

int dot_product(int A1[], int A2[], int k)
{
	int s = 0;
	for (int i = 0; i < k; i++) s += A1[i]*A2[i];
	return s;
}

int main()
{
	const int n = 100;
	int x[n], y[n];
	for (int i = 0; i < n; i++){ /* Для примера, пусть x[n] = y[n] = {10*{1}, 10*{2}, ... , 10*{10}},
	тогда скалярное произведение будет равно: 10(1 + 4 + 9 + 16 + 25 + 36 + 49 + 64 + 81 + 100) = 10(50 + 40 + 90 + 80 + 125) = 3850 */
		x[i] = 1 + i / 10;
		y[i] = 1 + i / 10;
	}
	printf("%d \n", dot_product(x, y, n));
	return 0;
}

