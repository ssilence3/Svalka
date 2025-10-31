#include <stdio.h>

void swap(int* x1, int* x2) {
    int t = *x1;
    *x1 = *x2;
    *x2 = t;
}

int partition(int A[], int low, int high) {
    int pivot = A[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (A[j] <= pivot) {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[high]);
    return i + 1;
}

void qsort(int A[], int low, int high) {
    if (low < high) {
        int t = partition(A, low, high);
        qsort(A, low, t - 1);
        qsort(A, t + 1, high);
    }
}

void read_array(int A[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    read_array(A, n);
    qsort(A, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}
