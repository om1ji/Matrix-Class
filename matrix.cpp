#include <iostream>
#include "matrix.h"

Matrix::Matrix(int n, int m) {
    this->mtrx = new int* [n];

    for (int i = 0; i < n; i++) { this->mtrx[i] = new int[m](); }

    this->mtrx_n = n;
    this->mtrx_m = m;
}

Matrix::Matrix(int n, int m, int arg_list[]) {

    this->mtrx = new int* [n];

    for (int i = 0; i < n; i++) { this->mtrx[i] = new int[m](); }

    this->mtrx_n = n;
    this->mtrx_m = m;

    for (int i = 0; i < this->mtrx_n; i++) {
        for (int j = 0; j < this->mtrx_m; j++) {
            this->mtrx[i][j] = arg_list[i * n + j];
        }
    }

    this->mtrx_elems = arg_list; // на будущее ))
}

Matrix::~Matrix() {
    for (int i = 0; i < this->mtrx_n; i++) delete[] this->mtrx[i];
    delete[] this->mtrx;
}

void Matrix::show() {
    for (int i = 0; i < this->mtrx_n; i++) {

        std::cout << std::endl;

        for (int j = 0; j < this->mtrx_m; j++) {
            std::cout << this->mtrx[i][j] << " ";
        }
    }
}
