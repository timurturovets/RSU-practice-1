#pragma once
#include <stdio.h>
#include "arrays.h"

void mat_algcom(int* mat[], int* algcom[], int len, int exclr, int exclc) {
    int row, col, i = 0, j = 0;

    for(row = 0; row < len; row++) {
        for(col = 0; col < len; col++) {
            if (row == exclr || col == exclc) continue;
            algcom[i][j] = mat[row][col];

            if (++j == len - 1) {
                j = 0; i++;
            }
        }
    }
}

int mat_det(int* mat[], int len) {
    if (len == 1) return mat[0][0];

    int i, s = 1, det = 0;
    int** algcom = make_matrix(len, len);

    for(i = 0; i < len; i++) {
        mat_algcom(mat, algcom, len, 0, i);

        det += mat[0][i] * mat_det(algcom, len - 1) * s;
        s *= -1;
    }

    return det;
}

void task6() {
    int N, i, j, det;
    printf("Input the order of your matrix: ");
    scanf_s("%d", &N);

    int** matrix = make_matrix(N, N);

    printf("Input elements of the matrix.\n");
    fill_matrix(matrix, N, N);

    printf("Your matrix:\n");
    print_matrix(matrix, N, N);

    det = mat_det(matrix, N);
    printf("Determinant of your matrix: %d", det);
}