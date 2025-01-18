#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

void matrixMultiplyIJK(const double* A, const double* B, double* C, int rows, int common, int cols);
void matrixMultiplyIKJ(const double* A, const double* B, double* C, int rows, int common, int cols);
void matrixMultiplyJIK(const double* A, const double* B, double* C, int rows, int common, int cols);
void matrixMultiplyJKI(const double* A, const double* B, double* C, int rows, int common, int cols);
void matrixMultiplyKIJ(const double* A, const double* B, double* C, int rows, int common, int cols);
void matrixMultiplyKJI(const double* A, const double* B, double* C, int rows, int common, int cols);

#endif // MATRIX_OPERATIONS_H
