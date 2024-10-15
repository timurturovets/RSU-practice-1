#pragma once
int** transpose_mat(int** mat, int r, int c) {
    int** tr = make_matrix(c, r);
    int i, j;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            tr[j][i] = mat[i][j];
        }
    }
    return tr;
}

void task18() {
    int r, c;
    printf("Input quantity of the rows of the matrix: ");
    scanf("%d", &r);

    printf("Input quantity of the columns of the matrix: ");
    scanf("%d", &c);

    int** mat = make_matrix(r, c);

    printf("Input elements of the matrix.\n");
    fill_matrix(mat, r, c);

    printf("Your matrix:\n");
    print_matrix(mat, r, c);

    int** new_mat = transpose_mat(mat, r, c);
    printf("\nTransposed matrix:\n");
    print_matrix(new_mat, c, r);
}