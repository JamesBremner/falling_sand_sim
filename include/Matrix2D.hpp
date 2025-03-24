#pragma once

#include <memory>

template <typename T>
class Matrix2D {

private:
    int rows_;
    int cols_;
    std::unique_ptr<T[]> data_;

public:
    Matrix2D(int x, int y) : rows_(y), cols_(x), data_(std::make_unique<T[]>(x * y)) {}

    T* operator[](int i) {
        assert(i >= 0 && i < rows_);
        return &data_[i * cols_];
    }

    T& at(int i, int j) {
        assert(i < rows_ && j < cols_ && i >= 0 && j >= 0);
        return data_[i * cols_ + j];
    }

    T& at(int i) {
        return data_[i];
    }

    int rows() const { return rows_; }
    int cols() const { return cols_; }
    int size() const { return rows_ * cols_; }
};