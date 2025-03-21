//#include<iostream>
//using namespace std;
//
//class Date {
//	int dd;
//	int mm;
//	int yyyy;
//public:
//	Date();
//	Date(int dd, int mm, int yyyy);
//	void accept();
//	void display();
//};
//Date::Date() {
//	this->dd = 0;
//	this->mm = 0;
//	this->yyyy = 0;
//}
//Date::Date(int dd, int mm, int yyyy) {
//	this->dd = dd;
//	this->mm = mm;
//	this->yyyy = yyyy;
//}
//void Date::accept() {
//	cout << "Enter your birthday date : ";
//	cin >> dd;
//
//	cout << "Enter your birthday month : ";
//	cin >> mm;
//
//	cout << "enter your birthday year : ";
//	cin >> yyyy;
//}
//void Date::display() {
//	cout << dd << "/" << mm << "/" << yyyy << endl;
//}
//
//class Student {
//	static int rno;
//	char name[20];
//	Date dob;
//public:
//	Student();
//	Student(const char* name, int dd,int mm,int yyyy);
//	void accept();
//	void display();
//};
//int Student::rno = 100;
//Student::Student() {
//	rno++;
//	strcpy(this->name, "");
//}
//Student::Student(const char* name,int dd,int mm,int yyyy):dob(dd,mm,yyyy) //:dob(dob) 
//{
//	rno++;
//	this->rno = rno;
//	strcpy(this->name, name);
//}
//void Student::accept() {
//
//	cout << "Enter your name : ";
//	cin >> name;
//
//	dob.accept();
//}
//
//void Student::display() {
//	cout << rno << " " << name << " ";
//	dob.display();
//}
//int main() {
//	Student s1;
//
//	s1.accept();
//	s1.display();
//
//	Student s2;
//	s2.accept();
//	s2.display();
//
//	char name[20];
//	strcpy(name, "CCC");
//	Student s3(name, 01, 01, 01);
//	s3.display();
//}