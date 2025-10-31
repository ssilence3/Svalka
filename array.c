#include <stdio.h>
void print_array(int A[], int n){
	for (int i = 0; i < n; ++i) printf("%d \n", A[i]);
}
int read_num(int q){
	char c; int s;
	while ((c = getchar()) >= '0' && c <= q - 1 + '0') s = s*q + c - '0';
	return s;
}
void read_array(int A[], int n){
	for (int i = 0; i < n; ++i) A[i] = read_num(10);
}
double awerage(int B[], int n){
	double res;
	for (int i = 0; i < n; i++) res += B[i];
	return res/n;
}
int find_max(int C[], int n){
	int max = 0;
	for (int i = 0; i < n; i++) max = C[i] > max ? C[i] : max;
	return max;
}
int compute_sum(int D[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++) sum += D[i] % 2 == 0 ? -D[i] : D[i];
	return sum;
}
int compute_sum_e(int E[], int n){
	int result = 1, sum = 0;
	for (int i = n - 1; i >= 0; i--){
		sum += E[i];
		result *= sum;
	}
	return result;
}
int main()
{
	int c[3] = {1, 2, 3};
	print_array(c, 3);
	printf("%d \n", find_max(c, 3));
	printf("%d \n", compute_sum_e(c, 3));
	return 0;
}

