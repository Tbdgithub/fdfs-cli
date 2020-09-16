//
// Created by john on 2020/9/16.
//

#include "MyHello.h"


void quickSort(int A[], int p, int r) {

    if (p < r) {
        int q = partition(A, p, r);

        quickSort(A, p, q - 1);

        quickSort(A, q + 1, r);

    }

}

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {

        if(A[j]<=x)
        {
            i = i + 1;
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

    }

    int temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;

    int result = i + 1;
    return result;
}
