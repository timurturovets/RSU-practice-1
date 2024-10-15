#pragma once
#include "task6.h"
#include "task18.h"

int** inverse_mat(int** mat, int order) {
    int i, j, det = mat_det(mat, order);
    if (det == 0) return NULL;

    int** result = make_matrix(order, order);
    for(i = 0; i < order; i++) {
        for(j = 0; j < order; j++) {
            int** algcom = make_matrix(order, order);
            mat_algcom(mat, algcom, order, i, j);
            result[i][j] = mat_det(algcom, order-1);
        }
    }
    //transpose_mat(result, order, order);

    for(i = 0; i < order; i++) {
        for(j = 0; j < order; j++) {
            result[i][j] *= det;
        }
    }
    return result;
}

void task19() {
    int o;
    printf("Input the order of your matrix: ");
    scanf("%d", &o);

    int** mat = make_matrix(o, o);

    printf("Input elements of your matrix.\n");
    fill_matrix(mat, o, o);

    int** result = inverse_mat(mat, o);

    if (result == NULL) printf("There is no inverse of your matrix.");
    else {
        printf("Inverse of your matrix:\n");
        print_matrix(result, o, o);
    }
}