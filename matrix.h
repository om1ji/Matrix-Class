#pragma once

class Matrix {

private:

    int** mtrx;

public:
    int mtrx_n;
    int mtrx_m;
    int* mtrx_elems; // �� ������� ))
    Matrix(int n, int m);
    ~Matrix();
    Matrix(int n, int m, int* list);
    void show();
};


