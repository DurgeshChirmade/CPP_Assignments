//#include<iostream>
//using namespace std;
//
//class Matrix {
//	int row;
//	int col;
//	int** arr;
//public:
//	Matrix();
//	Matrix(int row, int col);
//	Matrix(Matrix &m);
//	void accept();
//	void display();
//};
//
//Matrix::Matrix() {
//	this->row = 3;
//	this->col = 3;
//	arr = new int*[row];
//	for (int i = 0; i < row; i++) {
//		arr[i] = new int[col];
//		for (int j = 0; j < col; j++) {
//			arr[i][j] = 0;
//		}
//	}
//}
//
//Matrix::Matrix(int row, int col) {
//	this->row = row;
//	this->col = col;
//
//	arr = new int* [row];
//	for (int i = 0; i < row; i++) {
//		arr[i] = new int[col];
//		for (int j = 0; j < col; j++) {
//			arr[i][j] = 0;
//		}
//	}
//}
//
//Matrix::Matrix(Matrix& m) {
//	row = m.row;
//	col = m.col;
//	arr = new int* [row];
//	for (int i = 0; i < row; i++) {
//		arr[i] = new int[col];
//		for (int j = 0; j < col; j++) {
//			arr[i][j] = m.arr[i][j];
//		}
//	}
//}
//
//void Matrix::accept() {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << "Enter Data : ";
//			cin >> arr[i][j];
//		}
//	}
//}
//
//void Matrix::display() {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << arr[i][j]<<"\t";
//		}
//		cout << endl;
//	}
//}
//
//
//int main() {
//	
//	Matrix m1;
//	m1.accept();
//	m1.display();
//	
//
//	Matrix m2(4, 4);
//	m2.accept();
//	m2.display();
//
//	Matrix m3(m2);
//	//m3.accept();
//	m3.display();
//}