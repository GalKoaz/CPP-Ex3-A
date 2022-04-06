//
// Created by Gal on 03/04/2022.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>

using namespace std;

namespace zich{
    class Matrix{
        friend istream & operator >> (istream &is, Matrix& mat);
        friend ostream &  operator << (ostream &os,  const Matrix& mat);
        friend Matrix operator * (double scalar,  const Matrix& mat);
        friend Matrix operator *= (double scalar, Matrix& other);
    private:
        vector<double> _matrix;
        int _row, _col;
    public:
        Matrix(vector<double> matrix, int row, int col);

        Matrix operator - (const  Matrix& other);
        Matrix operator -= (const  Matrix& other);
        Matrix operator -- ();
        Matrix operator -- (int);
        Matrix operator-();

        Matrix operator + (const  Matrix& other);
        Matrix operator += (const  Matrix& other);
        Matrix operator ++ ();
        Matrix operator ++ (int);

        Matrix operator * (const  Matrix& other);
        Matrix operator *= (double  scalar);

        bool operator != (const Matrix& other) const;
        bool operator == (const Matrix& other) const;
        bool operator > (const Matrix& other) const;
        bool operator < (const Matrix& other) const;
        bool operator >= (const Matrix& other) const;
        bool operator <= (const Matrix& other) const;
    };
}
