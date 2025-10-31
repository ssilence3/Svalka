#include <stdio.h>
#include <math.h>
int factorial(int x)
{	
	return x <= 1 ? 1 : x*factorial(x-1);
}
int d_fact(int x)
{
	if (x % 2 == 0) return x > 1 ? x*d_fact(x - 2) : 1;
}
double cosI(double x, int k)
{
	return 0;
	//return k == 1 ? cos(x) : cos(cosI(x, k - 1));
}
int my_pow(double x, int n)
{
	return n == 0 ? 1 : n > 0 ? x * my_pow(x, n - 1) : 1 / my_pow(x, -n);
}
int count_1(int N){
	return N / 10 == 0 ? 1 : 1 + count_1(N / 10);
}
int count_2(int N){
	return N / 10 == 0 ? N : count_2(N / 10);
}
void count_6(int N){
	printf("%d", N % 10);
	if (N >= 10) count_6(N / 10);
}
void out_rings(int n, int *index);
void put_rings(int n, int *index);
int counter(){
	int c;
	return (c = getchar()) == '.' || c == EOF ? 0 : c <= '9' && c >= '0' ? 1 + counter() : counter();
}

int main()
{
	int K, N = 1; int *p;
	p = &N;
	printf("Type 1 if you wanna remove rings, anything else if not: ");
	if ((K = getchar()) == '1'){
		printf("How much rings do you wanna remove? Rings: ");
		scanf("%d", &K);
		putchar('\n');
		out_rings(K, p);
	}
	else{
		printf("How much rings do you wanna put on? Rings: ");
		scanf("%d", &K);
		putchar('\n');
		put_rings(K, p);
	}

	return 0;
}

void out_rings(int n, int* index){
	if (n == 1) printf("%d) Remove 1 ring\n", (*index)++);
	else if (n == 2){ 
		printf("%d) Remove 2 ring\n", (*index)++);
		printf("%d) Remove 1 ring\n", (*index)++);
	}
	else{
		out_rings(n-2, index);
		printf("%d) Remove %d ring\n", (*index)++, n);
		put_rings(n-2, index);
		out_rings(n-1, index);
		out_rings(n-2, index);
	}
}
void put_rings(int n, int* index){
	if (n == 1) printf("%d) Put on 1 ring\n", (*index)++);
	else if (n == 2){
		printf("%d) Put on 1 ring\n", (*index)++);
		printf("%d) Put on 2 ring\n", (*index)++);
	}
	else{
		put_rings(n-2, index);
		put_rings(n-1, index);
		out_rings(n-2, index);
		printf("%d) Put on %d ring\n", (*index)++, n);
		put_rings(n-2, index);
	}
}
