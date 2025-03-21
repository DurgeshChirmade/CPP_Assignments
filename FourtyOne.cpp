//#include<iostream>
//using namespace std;
//
//class Array {
//	int size;
//	int* arr;
//
//public:
//	Array();
//	Array(int size);
//	Array(Array& a);
//	void accept();
//	void display();
//	~Array();
//};
//
//Array::Array() {
//	this->size = 5;
//	this->arr = new int[size];
//
//	for (int i = 0; i < size; i++) {
//		arr[i] = 0;
//		cout << "Default" << endl;
//	}
//}
//
//Array::Array(int size) {
//	this->size = size;
//	this->arr = new int[size];
//	for (int i = 0; i < size; i++) {
//		arr[i] = 0;
//		cout << "parameterized" << endl;
//	}
//}
//
//Array::Array(Array& a) {
//	this->size = a.size;
//	this->arr = new int[size];
//	for (int i = 0; i < size; i++) {
//		arr[i] = a.arr[i];
//		cout << "copy constructor" << endl;
//	}
//}
//
//void Array::accept() {
//	for (int i = 0; i < size; i++) {
//		cout << "Enter Data : ";
//		cin >> arr[i];
//	}
//}
//
//void Array::display() {
//	for (int i = 0; i < size; i++) {
//		cout << arr[i]<<endl;
//	}
//}
//
//Array::~Array() {
//	delete []arr;
//	cout << "Destructor" << endl;
//}
//
//int main() {
//
//	Array A1;
//	A1.accept();
//	A1.display();
//
//	Array A2(5);
//	A2.accept();
//	A2.display();
//	
//	Array A3(A2);
//	A3.accept();
//	A3.display();
//}
//
