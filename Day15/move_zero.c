#include <stdio.h>

int main() {
    int arr[] = {1, 0, 2, 0, 4, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0; // position for non-zero elements

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    
    while (j < n) {
        arr[j] = 0;
        j++;
    }

    
    printf("Array after moving zeros to end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}