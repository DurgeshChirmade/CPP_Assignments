//#include<iostream>
//using namespace std;
//
///*Q.write a operator overload == for check both real & imag are equal or not in both the objects & then send true as a return value in main*/
//
//class Complex {
//	int real;
//	int imag;
//
//public:
//	Complex();
//	Complex(int real, int imag);
//	Complex(Complex& c);
//	Complex operator+(Complex &other);
//	Complex operator-(Complex other);
//	Complex operator-();
//	Complex operator++();
//	Complex operator++(int i);
//	bool operator==(Complex &c1);
//	void display();
//};
//
//Complex::Complex() {
//	this->real = 0;
//	this->imag = 0;
//}
//Complex:: Complex(int real, int imag) {
//	this->real = real;
//	this->imag = imag;
//}
//Complex::Complex(Complex& c) {
//	this->real = c.real;
//	this->imag = c.imag;
//}
//Complex Complex::operator+(Complex& other) {
//	Complex result;
//	result.real = this->real + other.real;
//	result.imag = this->imag + other.imag;
//	return result;
//}
//Complex Complex::operator-(Complex other) {
//	Complex result;
//	result.real = this->real - other.real;
//	result.imag = this->real - other.imag;
//	return result;
//}
//Complex Complex::operator-() {
//	Complex result;
//	result.real = -1 * this->real;
//	result.imag = -1 * this->imag;
//	return result;
//}
//Complex Complex :: operator++() {
//	Complex result;
//	result.real = ++real;
//	result.imag = ++imag;
//	return result;
//}
//Complex Complex::operator++(int i) {
//	Complex result;
//	result.real = real++;
//	result.imag = imag++;
//	cout << "i " << i << endl;
//	return result;
//}
//
//bool Complex::operator==(Complex &c1) {
//	if (this->real == c1.real && this->imag == c1.imag) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//void Complex::display() {
//	char res = this->imag > 0 ? '+' : '-';
//	cout << this->real << res << abs(this->imag) << "i" << endl;
//}
//
//int main() {
//	Complex c1(10, 20);
//	Complex c2(30,40);
//
//	Complex c3; 
//	c3 = c1 + c2;
//	c3.display();
//
//	c3 = c1 - c2;
//	c3.display();
//
//	c2 = -c1;
//	c2.display();
//
//	Complex c4;
//	c4 = ++c1;
//	c4.display();
//	c4 = c1++;
//	c4.display();
//
//	Complex c5(10, 20);
//	Complex c6(10, 20);
//
//	if (c5 == c6) {
//		cout << "Both are equal";
//	}
//	else {
//		cout << "Both are not equal";
//	}
//}