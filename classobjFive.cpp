//#include<iostream>
//using namespace std;
//
//class Product {
//	char *product_name;
//	int product_code;
//	float unit_price;
//public:
//	Product();
//	Product(char *name,int code, int price);
//	Product(Product& p);
//	~Product();
//	void display();
//};
//
//Product::Product() {
//	this->product_name = new char[100];
//	strcpy(this->product_name, "NA");
//	this->product_code = 0;
//	this->unit_price = 0;
//}
//
//Product::Product(char *name,int code, int price) {
//	this->product_name = new char[strlen(name)+1];
//	strcpy(this->product_name, name);
//	this->product_code = code;
//	this->unit_price = price;
//}
//
//Product::Product(Product& p) {
//	this->product_name = new char[100];
//	strcpy(this->product_name, p.product_name);
//	this->product_code = p.product_code;
//	this->unit_price = p.unit_price;
//}
//
//Product::~Product() {
//	delete[]product_name;
//}
//
//void Product::display() {
//	cout << this->product_name << endl;
//	cout << this->product_code << endl;
//	cout << this->unit_price << endl;
//}
//
//int main() {
//	Product p1;
//	p1.display();
//	cout << endl;
//
//	char *n=new char[100];
//	strcpy(n, "ASDF");
//
//	/*
//	cout << "Enter your char : ";
//	cin >> n;
//	*/
//
//	Product p2(n, 101, 450);
//	p2.display();
//	cout << endl;
//
//	Product p3(p2);
//	p3.display();
//	cout << endl;
//}