//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class Date {
//	int dd, mm, yyyy;
//public:
//	Date();
//	Date(int dd,int mm,int yyyy);
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
//void Date::display() {
//	cout << dd << "/" << mm << "/" << yyyy << endl;
//}
//
//class Employee {
//	int emp_id;
//	char name[20];
//	Date dob;
//public:
//	Employee();
//	Employee(int emp_id, const char* name, int dd,int mm,int yyyy);
//	void display();
//};
//Employee::Employee() {
//	this->emp_id = 0;
//	strcpy(this->name, name);
//}
//Employee::Employee(int emp_id, const char* name, int dd, int mm, int yyyy) :dob(dd,mm,yyyy) {
//	this->emp_id = emp_id;
//	strcpy(this->name, name);
//}
//void Employee::display() {
//	cout << emp_id << " " << name;
//	dob.display();
//}
//
//class WageEmployee :virtual public Employee {
//	int hour;
//	int rate;
//public:
//	WageEmployee();
//	WageEmployee(int hour,int rate,int emp_id,const char* name,int dd,int mm,int yyyy);
//	void display();
//	int calcsalary();
//};
//WageEmployee::WageEmployee() {
//	this->hour=0;
//	this->rate = 0;
//}
//WageEmployee::WageEmployee(int hour, int rate, int emp_id, const char* name, int dd, int mm, int yyyy):Employee(emp_id,name,dd,mm,yyyy) {
//	this->hour = hour;
//	this->rate = rate;
//}
//void WageEmployee::display() {
//	Employee::display();
//	cout << hour << " " << rate;
//}
//int WageEmployee::calcsalary() {
//	return hour * rate;
//}
//
//class Salesperson :public WageEmployee {
//	int sales;
//	int commission;
//public:
//	Salesperson();
//	Salesperson(int sales,int commission,int hour,int rate,int emp_id,const char* name,int dd,int mm,int yyyy);
//	void display();
//	int calcsalary();
//};
//Salesperson::Salesperson() {
//	this->sales = 0;
//	this->commission = 0;
//}
//Salesperson::Salesperson(int sales, int commission, int hour, int rate, int emp_id, const char* name, int dd, int mm, int yyyy):WageEmployee(hour,  rate,  emp_id,name,dd,mm,yyyy){
//	this->sales = sales;
//	this->commission = commission;
//}
//void Salesperson::display() {
//	WageEmployee::display();
//	cout << this->sales << " " << this->commission;
//}
//int Salesperson::calcsalary() {
//	return WageEmployee::calcsalary() + sales * commission;
//}
//
//class Manager :virtual public Employee {
//protected:
//	int sal;
//	int sub;
//public:
//	Manager();
//	Manager(int emp_id, const char* name, int dd, int mm, int yyyy,int sal,int sub);
//	void display();
//};
//Manager::Manager() {
//	this->sal = 0;
//	this->sub = 0;
//}
//Manager::Manager(int emp_id, const char* name, int dd, int mm, int yyyy,int sal, int sub):Employee(emp_id, name,dd,mm,yyyy) {
//	this->sal = sal;
//	this->sub = sub;
//}
//void Manager::display() {
//	cout << sal << " " << sub<<" ";
//	cout << "Manager display";
//}
//
//class SalesManager :public Salesperson, public Manager {
//public:
//	SalesManager();
//	SalesManager(int sales, int commission, int hour, int rate, int emp_id, const char* name, int dd, int mm, int yyyy, int sal, int sub);
//	void display();
//};
//SalesManager::SalesManager() {
//
//}
//
//SalesManager::SalesManager(int sales, int commission, int hour, int rate, int emp_id, const char* name, int dd, int mm, int yyyy, int sal, int sub) :Salesperson(sales,commission,hour, rate,emp_id,name,dd, mm,yyyy), Manager(emp_id,name,dd,mm,yyyy, sal , sub),Employee(emp_id,name,dd,mm,yyyy) {
//
//}
//
//void SalesManager::display() {
//	Salesperson::display();
//	cout <<sal << " " <<sub;
//}
//
//int main() {
//	SalesManager sm1;
//	sm1.display();
//}
