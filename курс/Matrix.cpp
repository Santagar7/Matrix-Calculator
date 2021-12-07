#include "Matrix.h"
#include "MyForm.h"
#include "Windows.h"

using namespace std;

Matrix::Matrix(int rows, int columns) {
	matrix = new double*[rows];
	for (size_t i = 0; i < rows; i++) {
		matrix[i] = new double [columns];
		for (size_t j = 0; j < columns; j++)
		{
			matrix[i][j] = 0.0;
		}
	}
	this->rows = rows;
	this->columns = columns;
}

Matrix::Matrix(const Matrix& ref_Matrix)
{
	this->rows = ref_Matrix.rows;
	this->columns = ref_Matrix.columns;
	this->matrix = new double* [rows];

	for (size_t i = 0; i < rows; i++)
	{
		this->matrix[i] = new double[columns];
		for (size_t j = 0; j < columns; j++)
		{
			this->matrix[i][j] = ref_Matrix.matrix[i][j];
		}
	}
}

Matrix::Matrix()
{
	this->rows = 0;
	this->columns = 0;
	matrix = nullptr;
}

double* Matrix::operator[] (int i)
{
	if (i < -1 || i >= rows) throw "Invalid array access";

	return matrix[i];
}



double Matrix::det()
{
	if (rows != columns) throw("Invalid size!");
	int n = this->rows;
		Matrix B = Matrix(*this);
		for (int step = 0; step < n - 1; step++) {
			for (int row = step + 1; row < n; row++)
			{
				double coeff = -B[row][step] / B[step][step];
				for (int col = step; col < n; col++) {
					B[row][col] += B[step][col] * coeff;
				}
			}
		}
		double Det = 1;
		for (int i = 0; i < n; i++)
			Det *= B[i][i];
		return Det;
}


Matrix Matrix::transponate()
{
	Matrix transponate = Matrix(columns, rows);
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++) {
			transponate[j][i] = matrix[i][j];
		}
	return transponate;
}

Matrix Matrix::inverse()
{

	double determinant = this->det();
		if (determinant == 0) throw ("Determinant equals 0!!!");
		if (rows != columns) throw ("Matrix is not square!!!");
		Matrix a_copy = Matrix(*this);
		Matrix temp = Matrix(rows, columns);
		Matrix adj = Matrix(rows - 1, columns - 1);
		int size = rows;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				for (int k = 0, ka = 0; k < size; k++, ka++)
				{
					if (k==i)
					{
						ka--;
						continue;
					}
					for (int l = 0, la = 0; l < size; l++, la++)
					{
						if (l==j)
						{
							la--;
							continue;
						}
						adj[ka][la] = a_copy[k][l];
					}
				}
				
				temp[i][j] = adj.det() * pow(-1, i + j);
				adj.clear();
			}
		}
		return temp.transponate() / determinant;
}

Matrix Matrix::Gauss()
{
	if (rows != columns) throw("Number of rows must equal number of columns!");
	double m, sum, max, c;
	int inmax;
	Matrix temp = Matrix(*this);
	for (int k = 0; k < rows; k++) {
		max = abs(temp.matrix[k][k]);
		inmax = k;
		for (int i = k + 1; i < rows-1; i++) {
			if (abs(temp.matrix[i][k]) > max) {
				max = abs(temp.matrix[i][k]);
				inmax = i;
			}
		}
		if (max == 0)
			throw("Matrix is wrong!");

		if (k != inmax) {
			for (int j = 0; j < rows; j++) {

				std::swap(temp.matrix[inmax][j], temp.matrix[k][j]);
			}

		}

		for (int j = k + 1; j < rows; j++) {
			m = temp.matrix[j][k] / temp.matrix[k][k];
			for (int i = k; i < rows; i++) {
				temp.matrix[j][i] = temp.matrix[j][i] - m * temp.matrix[k][i];
			}
		}
	}
	
	return temp;
}

void Matrix::swap(Matrix &B)
{
	Matrix temp = Matrix(*this);
	*this = Matrix(B);
	B = Matrix(temp);
}

Matrix Matrix::operator + (const Matrix& other) {
	if (this->rows != other.rows || this->columns != other.columns) throw("Invalid size");
	Matrix temp = Matrix(this->rows, this->columns);

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			temp.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
		}
	}
	return temp;
}

Matrix Matrix::operator * (const Matrix& other) {
	if (this->columns != other.rows) throw("Invalid size");
	
	Matrix temp = Matrix(this->rows, this->columns);
	for (int i = 0; i < this->rows; i++) {
		for (int j = 0; j < other.columns; j++) {
			for (int k = 0; k < this->columns; k++) {
				temp.matrix[i][j] += this->matrix[i][k] * other.matrix[k][j];
			}
		}
	}
	return temp;
}

Matrix Matrix::operator + (const double& num)
{
	Matrix temp = Matrix(*this);
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			temp.matrix[i][j] += num;
		}
	}
	return temp;
}

Matrix Matrix::operator-(const double& num)
{
	Matrix temp = Matrix(*this);
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			temp.matrix[i][j] -= num;
		}
	}
	return temp;
}

Matrix Matrix::operator*(const double& num)
{
	Matrix temp = Matrix(*this);
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			temp.matrix[i][j] *= num;
		}
	}
	return temp;
}

Matrix Matrix::operator/(const double& num)
{
	if (num == 0) throw("Zero division!");
	Matrix temp = Matrix(*this);
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			temp.matrix[i][j] /= num;
		}
	}
	return temp;
}

Matrix& Matrix::operator=(const Matrix& other)
{

	for (int i = 0; i < rows; i++)
	{
		if (matrix[i] != nullptr)
		{
			delete[] matrix[i];
		}
	}
	if (matrix != nullptr) delete[] matrix;
	this->rows = other.rows;
	this->columns = other.columns;
	this->matrix = new double* [rows];

	for (size_t i = 0; i < rows; i++)
	{
		this->matrix[i] = new double[columns];
		for (size_t j = 0; j < columns; j++)
		{
			this->matrix[i][j] = other.matrix[i][j];
		}
	}
	return *this;
}

Matrix Matrix::operator - (const Matrix& other) {
		if (this->rows != other.rows || this->columns != other.columns) throw("Invalid size");

	Matrix temp = Matrix(this->rows, this->columns);
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			temp.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
		}

	}
	return temp;
}

	int Matrix::getRows() {
		return this->rows;
	}

	void Matrix::setRows(int rows)
	{
		double** temp = new double *[rows];
		for (int i = 0; i < this->rows; i++)
		{
			temp[i] = matrix[i];
		}
		if(this->rows < rows) {
			for (int i = this->rows; i < rows; i++)
			{
				temp[i] = new double[columns];
				for (int j = 0; j < columns; j++)
				{
					temp[i][j] = 0.0;
				}
			}
		}
		matrix = temp;
		this->rows = rows;
	}

	void Matrix::clear()
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				matrix[i][j] = 0.0;
			}
		}
	}

	int Matrix::getColumns()
	{
		return this->columns;
	}

	void Matrix::setColumns(int columns)
	{
		double** temp = new double* [rows];
		for (size_t i = 0; i < rows; i++)
		{
			temp[i] = new double[columns];
			for (int j = 0; j < this->columns; j++)
			{
				temp[i][j] = matrix[i][j];
			}
			for (int j = this->columns; j < columns; j++)
			{
				temp[i][j] = 0.0;
			}
		}
		this->columns = columns;
		matrix = temp;
	}

	

	Matrix::~Matrix() {
		for (int i = 0; i < rows; i++)
		{
			delete[] matrix[i];
		}
		delete[] matrix;
}

