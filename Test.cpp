#include "doctest.h"
#include "Matrix.hpp"
#include <string>

using namespace zich;

TEST_CASE ("Good input") {
    vector<double> vec = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    vector<double> vec2 = {9, 0, 0, 0, 9, 0, 0, 0, 9};
    Matrix mat1(vec, 3, 3);
    Matrix mat2(vec, 3, 3);
    Matrix mat3(vec, 3, 3);
            SUBCASE("Comparison") {
                CHECK(mat1 != mat3);
                CHECK(mat2 != mat3);
                CHECK(mat3 != mat2);
                CHECK(mat3 != mat1);
                CHECK(mat1 == mat2);
                CHECK(mat1 >= mat2);
                CHECK(mat1 <= mat2);
                CHECK(mat3 > mat1);
                CHECK(mat3 > mat2);
                CHECK(mat2 < mat3);
                CHECK(mat1 < mat3);
    }
}

TEST_CASE ("incorrect inputs") {
    vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
            SUBCASE("Negative row and col") {
                CHECK_THROWS(Matrix a(identity, -3, 3));
                CHECK_THROWS(Matrix a(identity, 3, -3));
                CHECK_THROWS(Matrix a(identity, -3, -3));
                CHECK_THROWS(Matrix a(identity, -3, 4));
                CHECK_THROWS(Matrix a(identity, 5, -4));
                CHECK_THROWS(Matrix a(identity, -5, -5));
    }
            SUBCASE("incorrect dimension") {
                CHECK_THROWS(Matrix a(identity, 2, 3));
                CHECK_THROWS(Matrix a(identity, 4, 3));
                CHECK_THROWS(Matrix a(identity, 7, 8));
    }
}