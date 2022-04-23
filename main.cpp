#include "bubblesort.h"

int main() {
    int n;
    cin >> n;
    int* arr1 = new int[n];
    for (int i=0; i<n; i++) {
        cin >> arr1[i];
    }
    bubblesort (arr1, n);
    for (int i=0; i<n; i++) {
        cout << arr1[i] << " ";
    }

    int m;
    cin >> m;
    double* arr2 = new double[m];
    for (int i=0; i<m; i++) {
        cin >> arr2[i];
    }
    bubblesort (arr2, m);
    for (int i=0; i<m; i++) {
        cout << arr2[i] << " ";
    }
}
