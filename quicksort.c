#include <stdio.h>
void qsort(int *, int, int);
void partition(int *, int, int, int *);
void swap(int *, int *);

int main(){
	int A[4] = {123, 34, 66, 54};
	qsort(A, 0, 3);
	for (int i = 0; i < 4; i++) printf("%d \n", A[i]);
}

void qsort(int A[], int l, int r){
	int q = 3;
	if (l < r){
		partition(A, l, r, &q);
		qsort(A, l, q-1);
		qsort(A, q+1, r);
	}
}
void partition(int A[], int l, int r, int* q){
	int i, j, x;
	x = A[r];
	i = l-1;
	for (j = l; j < r; j++)
		if (A[j] <= x){
			i += 1;
			swap(A[j], A[i]);
		}
	swap(A[i+1], A[r]);
	*q = i + 1;
}
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
