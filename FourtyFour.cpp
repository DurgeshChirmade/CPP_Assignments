//#include<iostream>
//using namespace std;
//
///*Q.check all elements in array are equal or not & if eqaul all elements then send true as boolean value to the main function.*/
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
//	int& operator[](int i);
//	Array& operator!();
//	
//	//void display(int key);
//	~Array();
//	friend istream& operator>>(istream& cin, Array& a1);
//	friend ostream& operator<<(ostream& cout, Array& a2);
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
//int& Array::operator[](int i) {
//	/*Array array;
//	for (int i = 0; i < size; i++) {
//		array.arr[i + 1] = arr[i];
//	}*/
//	return arr[i];
//
//}
//
//Array& Array::operator!() {
//	//Array rev;
//	for (int i = 0; i < size/2; i++) {
//		int temp = arr[i];
//		arr[i] = arr[size-i- 1];
//		arr[size - i - 1] = temp;
//	}
//	return *this;
//}
//
//
//Array::~Array() {
//	delete []arr;
//	cout << "Destructor" << endl;
//}
//
//istream& operator>>(istream& cin, Array& a1) {
//	cout << "Enter the size of array : ";
//	cin >> a1.size;
//	for (int i = 0; i < a1.size; i++) {
//		cout << "Enter data : ";
//		cin >> a1.arr[i];
//	}
//	return cin;
//}
//
//ostream& operator<<(ostream& cout, Array& a2) {
//	for (int i = 0; i < a2.size; i++) {
//		cout << a2.arr[i]<<" ";
//	}
//	return cout;
//}
//
//int main() {
//
//	/*Array A1;
//	A1.accept();
//	A1.display();
//
//	Array A2(5);
//	A2.accept();
//	A2.display();
//	
//	Array A3(A2);
//	A3.accept();
//	A3.display();*/
//
//	
//	//Array A4;
//	//A4.accept();
//	//A4.display();
//	///*
//	//cout << A4[4];
//	//A4[3] = 7;
//	//A4.display();
//	//*/
//	//
//	//Array A5=!A4;
//	////A5.accept();
//	//A5.display();
//
//	Array A6;
//	cin >> A6;
//	cout << A6<<endl;
//
//}
//
