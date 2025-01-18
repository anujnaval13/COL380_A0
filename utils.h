#ifndef UTILS_H
#define UTILS_H

#include <string> // Include this to use std::string

double* readMatrix(const std::string& filePath, int rows, int cols);
void writeMatrix(const std::string& filePath, const double* matrix, int rows, int cols);

#endif // UTILS_H
