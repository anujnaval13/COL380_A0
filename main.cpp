#include <iostream>
#include <string>
#include "matrix_operations.h"
#include "utils.h"

int main(int argc, char *argv[]) {
    if (argc != 7) {
        std::cerr << "Usage: main <type> <mtx_A_rows> <mtx_A_cols> <mtx_B_cols> <input_path> <output_path>\n";
        return 1;
    }

    // Parse command-line arguments
    int type = std::stoi(argv[1]);
    int mtx_A_rows = std::stoi(argv[2]);
    int mtx_A_cols = std::stoi(argv[3]);
    int mtx_B_cols = std::stoi(argv[4]);
    std::string input_path = argv[5];
    std::string output_path = argv[6];

    // Read matrices
    double* matrixA = readMatrix(input_path + "/mtx_A.bin", mtx_A_rows, mtx_A_cols);
    double* matrixB = readMatrix(input_path + "/mtx_B.bin", mtx_A_cols, mtx_B_cols);
    double* matrixC = new double[mtx_A_rows * mtx_B_cols]();

    // Call the appropriate multiplication function
    switch (type) {
        case 0: matrixMultiplyIJK(matrixA, matrixB, matrixC, mtx_A_rows, mtx_A_cols, mtx_B_cols); break;
        case 1: matrixMultiplyIKJ(matrixA, matrixB, matrixC, mtx_A_rows, mtx_A_cols, mtx_B_cols); break;
        case 2: matrixMultiplyJIK(matrixA, matrixB, matrixC, mtx_A_rows, mtx_A_cols, mtx_B_cols); break;
        case 3: matrixMultiplyJKI(matrixA, matrixB, matrixC, mtx_A_rows, mtx_A_cols, mtx_B_cols); break;
        case 4: matrixMultiplyKIJ(matrixA, matrixB, matrixC, mtx_A_rows, mtx_A_cols, mtx_B_cols); break;
        case 5: matrixMultiplyKJI(matrixA, matrixB, matrixC, mtx_A_rows, mtx_A_cols, mtx_B_cols); break;
        default:
            std::cerr << "Invalid type specified.\n";
            delete[] matrixA;
            delete[] matrixB;
            delete[] matrixC;
            return 1;
    }

    // Write the result matrix
    writeMatrix(output_path + "/mtx_C.bin", matrixC, mtx_A_rows, mtx_B_cols);

    // Clean up
    delete[] matrixA;
    delete[] matrixB;
    delete[] matrixC;

    return 0;
}
