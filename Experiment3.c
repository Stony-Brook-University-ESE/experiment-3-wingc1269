#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 1000;
    int *matrix = malloc(n * n * sizeof(int));

    for (int i = 0; i < n * n; i++) {
            matrix[i] = i + 1;
        }
    

    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%7d ", matrix[i * n + j]);
        }
        printf("\n");
    }

    return 0;
}
