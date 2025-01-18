#include "utils.h"
#include <fstream>
#include <iostream>
#include <stdexcept>

double* readMatrix(const std::string& filePath, int rows, int cols) {
    std::ifstream file(filePath, std::ios::binary);
    if (!file) {
        throw std::runtime_error("Failed to open file: " + filePath);
    }

    double* matrix = new double[rows * cols];
    file.read(reinterpret_cast<char*>(matrix), rows * cols * sizeof(double));

    if (!file) {
        delete[] matrix;
        throw std::runtime_error("Error reading matrix data from file: " + filePath);
    }

    return matrix;
}

void writeMatrix(const std::string& filePath, const double* matrix, int rows, int cols) {
    std::ofstream file(filePath, std::ios::binary);
    if (!file) {
        throw std::runtime_error("Failed to open file: " + filePath);
    }

    file.write(reinterpret_cast<const char*>(matrix), rows * cols * sizeof(double));
    if (!file) {
        throw std::runtime_error("Error writing matrix data to file: " + filePath);
    }
}
