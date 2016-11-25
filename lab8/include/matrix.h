#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <cstdio>
#include <cstddef>

class Matrix {
public:
    Matrix(std::size_t r, std::size_t c);
    Matrix(const Matrix &M);
    ~Matrix();

    std::size_t get_rows() const;
    std::size_t get_cols() const;
    void set(std::size_t i, std::size_t j, int val);
    int get(std::size_t i, std::size_t j);
    void print(FILE *f);

    Matrix& operator=(const Matrix& m);

    Matrix operator+(const Matrix& m) const;
    Matrix operator-(const Matrix& m) const;
    Matrix operator*(const Matrix& m) const;

    Matrix& operator+=(const Matrix& m);
    Matrix& operator-=(const Matrix& m);
    Matrix& operator*=(const Matrix& m);

    bool operator==(const Matrix& m) const;
    bool operator!=(const Matrix& m) const;

    void del_data();
    Matrix& swap(Matrix& m);
private:
    std::size_t _rows;
    std::size_t _cols;
    int **_data;   
};

#endif
