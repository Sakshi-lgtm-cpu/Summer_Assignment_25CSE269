#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Finding diagonal sum
    for (int i = 0; i < n; i++) {
        sum = sum + A[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}