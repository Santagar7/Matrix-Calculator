#pragma once

#include <iostream>
#include <string>

using namespace std;

class Matrix {
private:
	double **matrix;
	int rows;
	int columns;


public:
	Matrix(int rows, int columns);
	Matrix(const Matrix& ref_Matrix);
	Matrix();

	Matrix operator + (const Matrix& other);
	Matrix operator - (const Matrix& other);
	Matrix operator * (const Matrix& other);
	Matrix operator + (const double& num);
	Matrix operator - (const double& num);
	Matrix operator * (const double& num);
	Matrix operator / (const double& num);
	Matrix& operator = (const Matrix& other);
	double* operator[] (int i);

	double det();

	int getRows();

	void setRows(int rows);

	void clear();

	int getColumns();

	void setColumns(int columns);

	Matrix transponate();
	
	Matrix inverse();

	Matrix Gauss();

	void swap(Matrix &B);

	~Matrix();

};