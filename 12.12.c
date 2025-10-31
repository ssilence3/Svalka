#include <stdio.h>
int searching_max(int N)
{
	return (N / 10 == 0) ? N : (N % 10 < N / 10 % 10) ? searching_max(N/10) : searching_max(N % 10 + (N / 100 * 10));
}
int main()
{
	printf("%d\n", searching_max(912539));
}
