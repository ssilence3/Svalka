#include <stdio.h>
double average(int *A, int n);
void swap (int* a, int* b) //The usefullness of pointers
{
	int c = *a;
	*a = *b; *b = c;
}
int main()
{
	// 1)
	int *p; //It's a pointer
	p = NULL; //It's an empty pointer (null value)
	p = 0; //Same as NULL (but better NULL)
	int k = 12;
	p = &k; //From now on 'p' contains adress of k and have a type 'int*'
	// If we want to get a value of k we will have to write '*p'

	// 2)
	int x=1, y=2;
	swap(&x, &y);

	// 3)
	int A[5] = {10, 20, 30, 40, 50};
	int *n = A;
	printf("%d \n", *n);
	n += 3;
	printf("%d \n", *n);
	printf("%d \n", n);

	// 4)
	int **pp = &p; //It's a pointer to pointer

	// 5)
	int A[5] = {123, 3213, 3, 21421, 321312};
	average(A+2, 3); //That is equal 3
	// A[k] is equal *(A + k)
	// &A[i] is equal (A + k)
	
	// 6)
	// We can compare adresses

}
