#include "matrix_operations.h"

// Matrix multiplication function ijk
void matrixMultiplyIJK(const double* A, const double* B, double* C, int rows, int common, int cols) {
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            for(int k = 0; k<common; k++){
                C[i*cols+j] += A[i*common+k]*B[k*cols+j];
            }
        }
    }
}

// Matrix multiplication function ikj
void matrixMultiplyIKJ(const double* A, const double* B, double* C, int rows, int common, int cols) {
    for(int i = 0; i<rows; i++){
        for(int k = 0; k<common; k++){
            for(int j = 0; j<cols; j++){
                C[i*cols+j] += A[i*common+k]*B[k*cols+j];
            }
        }
    }
}

// Matrix multiplication function jik
void matrixMultiplyJIK(const double* A, const double* B, double* C, int rows, int common, int cols) {
    for(int j = 0; j<cols; j++){
        for(int i = 0; i<rows; i++){
            for(int k = 0; k<common; k++){
                C[i*cols+j] += A[i*common+k]*B[k*cols+j];
            }
        }
    }
}

// Matrix multiplication function jki
void matrixMultiplyJKI(const double* A, const double* B, double* C, int rows, int common, int cols) {
    for(int j = 0; j<cols; j++){
        for(int k = 0; k<common; k++){
            for(int i = 0; i<rows; i++){
                C[i*cols+j] += A[i*common+k]*B[k*cols+j];
            }
        }
    }
}

// Matrix multiplication function kij
void matrixMultiplyKIJ(const double* A, const double* B, double* C, int rows, int common, int cols) {
    for(int k = 0; k<common; k++){
        for(int i = 0; i<rows; i++){
            for(int j = 0; j<cols; j++){
                C[i*cols+j] += A[i*common+k]*B[k*cols+j];
            }
        }
    }
}

// Matrix multiplication function kji
void matrixMultiplyKJI(const double* A, const double* B, double* C, int rows, int common, int cols) {
    for(int k = 0; k<common; k++){
        for(int j = 0; j<cols; j++){
            for(int i = 0; i<rows; i++){
                C[i*cols+j] += A[i*common+k]*B[k*cols+j];
            }
        }
    }
}
