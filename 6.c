#include <stdio.h>


void abs_array(int *array, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(array+i) < 0) {
            *(array+i) = -*(array+i);
            count++;
        }
    }
    printf("%d ", count);
}


int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    abs_array(array, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}
