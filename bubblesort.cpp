#include "bubblesort.h"
void bubblesort (int* arr1, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int a = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = a;
            }
        }
    }
}

void bubblesort (double* arr2, int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m-1; j++) {
            if (arr2[j] > arr2[j + 1]) {
                double a = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = a;
            }
        }
    }
}