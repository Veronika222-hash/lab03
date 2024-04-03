#include <iostream>

using namespace std;

class Matrix {
private:
  int rows_;
  int columns_;
  int data_[10][10];

public:
  Matrix(int rows, int columns) {
    rows_ = rows;
    columns_ = columns;
    for (int i = 0; i < rows_; ++i) {
      for (int j = 0; j < columns_; ++j) {
        data_[i][j] = 0;
      }
    }
  }

  int& operator()(int row, int column) {
    return data_[row][column];
  }
    
  void PrintColumn(int column) const {
    for (int i = 0; i < rows_; ++i) {
      cout << data_[i][column] << " ";
    }
    cout << endl;
  }

  void PrintRow(int row) const {
    for (int i = 0; i < columns_; ++i) {
      cout << data_[row][i] << " ";
    }
   cout << endl;
  }

  void Print() const {
    for (int i = 0; i < rows_; ++i) {
      for (int j = 0; j < columns_; ++j) {
        cout << data_[i][j] << " ";
      }
      cout << endl;
    }
  }
};

int main() {
    Matrix matrix(3, 3);
    
    matrix(0, 0) = 1;
    matrix(0, 1) = 2;
    matrix(0, 2) = 3;
    matrix(1, 0) = 4;
    matrix(1, 1) = 5;
    matrix(1, 2) = 6;
    matrix(2, 0) = 7;
    matrix(2, 1) = 8;
    matrix(2, 2) = 9;
    
    matrix.Print();
    
    cout << "Стовпець 1: ";
    matrix.PrintColumn(1);
    
    cout << "Рядок 2: ";
    matrix.PrintRow(2);
    
    return 0;
}
