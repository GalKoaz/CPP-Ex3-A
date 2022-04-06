//
// Created by Gal on 03/04/2022.
//

#include <sstream>
#include <stdexcept>

using namespace std;

#include "Matrix.hpp"

using namespace zich;


/**************************************************/
//==================== Methods ====================/
/**************************************************/

Matrix::Matrix(vector<double> matrix, int row, int col)
        : _matrix(move(matrix)), _row(row), _col(col) {
//    if (_row <= 0 || _col <= 0) {
//        throw invalid_argument("Row and col Negative");
//    }
//    if (_matrix.size() != _row * _col) {
//        throw invalid_argument("Invalid dimension");
//    }
}


Matrix Matrix::operator+(const Matrix &other) {
    return {{}, 0, 0};;
}



Matrix Matrix::operator++(int) {
    return {{}, 0, 0};;
}

Matrix Matrix::operator-(const Matrix &other) {
    return {{}, 0, 0};;
}


Matrix Matrix::operator--(int) {
    return {{}, 0, 0};;
}


Matrix Matrix::operator*(const Matrix &other) {
    return {{}, 0, 0};;
}

bool Matrix::operator>(const Matrix &other) const {
    return true;
}

bool Matrix::operator>=(const Matrix &other) const {
    return true;
}

bool Matrix::operator<(const Matrix &other) const {
    return true;
}

bool Matrix::operator<=(const Matrix &other) const {
    return true;
}


Matrix zich::operator*(double scalar, const Matrix &matrix) {
    return {{}, 0, 0};;
}

istream &zich::operator>>(istream &is, Matrix &mat) {
    return is;
}

ostream &zich::operator<<(ostream &os, const Matrix &mat) {
    return os;
}

Matrix zich::operator*=(double scalar, Matrix &other) {
    return {{}, 0, 0};
}

Matrix Matrix::operator-=(const Matrix &other) {
    return {{}, 0, 0};
}

Matrix Matrix::operator--() {
    return {{}, 0, 0};;
}

Matrix Matrix::operator+=(const Matrix &other) {
    return {{}, 0, 0};
}

Matrix Matrix::operator++() {
    return {{}, 0, 0};
}

Matrix Matrix::operator*=(double scalar) {
    return {{}, 0, 0};
}

bool Matrix::operator!=(const Matrix &other) const {
    return false;
}

bool Matrix::operator==(const Matrix &other) const {
    return false;
}

Matrix Matrix::operator-() {
    return {{}, 0, 0};
}
