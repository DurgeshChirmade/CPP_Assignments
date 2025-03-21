//#include<iostream>
//using namespace std;
//
//class Complex {
//	int real;
//	int imag;
//
//public:
//	Complex();
//	Complex(int real, int imag);
//	void accept();
//	void display();
//	int getReal();
//	int getImag();
//	void setReal(int real);
//	void setImag(int imag);
//};
//
//Complex::Complex() {
//	real = 0;
//	imag = 0;
//}
//
//Complex::Complex(int real, int imag) {
//	this->real = real;
//	this->imag = imag;
//}
//
//void Complex::accept() {
//	cout << "Enter the value of real : ";
//	cin >> real;
//
//	cout << "Enter the value of imag : ";
//	cin >> imag;
//}
//
//void Complex::display() {
//	char ch;
//	ch = (imag >= 0) ? '+' : '-';
//	cout << real << ch << abs(imag) << "i" << endl;
//}
//
//int Complex::getReal() {
//	return real;
//}
//
//int Complex::getImag() {
//	return imag;
//}
//
//void Complex::setReal(int real) {
//	this->real = real;
//}
//
//void Complex::setImag(int imag) {
//	this->imag = imag;
//}
//
//int main() {
//
//	Complex c1;
//	c1.display();
//
//	Complex c2(10, 20);
//	c2.display();
//
//	Complex c3;
//	c3.accept();
//	c3.display();
//
//	cout << "Real : " << c2.getReal() << endl;
//	c2.setReal(100);
//	c2.display();
//
//}