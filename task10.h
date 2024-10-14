#pragma once
#include "arrays.h"

int mat_mult(int** mat1, int** mat2, int r1, int c1, int r2, int c2, int** result) {
    if (c1 != r2) return -1;

    int i, j, k;
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(k = 0; k < r2; k++) {
                result[i][j] += (mat1[i][k] * mat2[k][j]);
            }
        }
    }
    return 1;
}
void task10() {
    int r1, c1, r2, c2, code;

    printf("Input quantity of the rows of the first matrix: ");
    scanf_s("%d", &r1);

    printf("Input quantity of the columns of the first matrix: ");
    scanf_s("%d", &c1);

    int** mat1 = make_matrix(r1, c1);
    printf("Input elements of the first matrix.\n");
    fill_matrix(mat1, r1, c1);

    printf("Input quantity of the rows of the second matrix: ");
    scanf_s("%d", &r2);

    printf("Input quantity of the columns of the second matrix: ");
    scanf_s("%d", &c2);

    // for unknown reason further using of the make_matrix and fill_matrix functions leads to UB (?)
    int** mat2 = (int**) malloc(r2 * sizeof(int));
    for(int i = 0; i < r2; i++) {
        mat2[i] = (int*) malloc(c2 * sizeof(int));
    }
    printf("Input elements of the second matrix.\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            printf("Row %d, column %d: ", i + 1, j + 1);
            scanf_s("%d", &mat2[i][j]);
        }
    }

    int** result = make_matrix(r1, c2);
    code = mat_mult(mat1, mat2, r1, c1, r2, c2, result);

    if (code == -1) printf("Multiplication of those matrices is impossible.");
    else {
        printf("Resulting matrix:\n");
        print_matrix(result, r1, c2);
    }
}