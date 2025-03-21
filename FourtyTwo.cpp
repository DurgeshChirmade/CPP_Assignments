//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class Employee {
//	int emp_id;
//	char emp_name[20];
//	double salary;
//
//public:
//	Employee();
//	Employee(int, char*, double);
//	void Accept();
//	void Display();
//	int getEmpid();
//	char* getEmpname();
//	double getSalary();
//	void setEmpid(int empid);
//	void setEmpname(char* name);
//	void setSalary(double salary);
//};
//
//Employee::Employee() {
//	emp_id = 0;
//	strcpy(emp_name, "");
//	salary = 0.0;
//}
//
//Employee::Employee(int emp_id, char* emp_name, double salary) {
//	this->emp_id = emp_id;
//	strcpy(this->emp_name,emp_name);
//	this->salary = salary;
//}
//
//void Employee::Accept() {
//	cout << "Enter employee id : ";
//	cin >> emp_id;
//	cout << "Enter employee name : ";
//	cin >> emp_name;
//	cout << "Enter Employee Salary : ";
//	cin >> salary;
//}
//
//void Employee::Display() {
//	cout << endl << "Employee Details : " << endl;
//	cout << emp_id << " " << emp_name << " " << salary << endl;
//}
//
//int Employee::getEmpid() {
//	return emp_id;
//}
//
//char* Employee::getEmpname() {
//	return emp_name;
//}
//
//double Employee::getSalary() {
//	return salary;
//}
//
//void Employee::setEmpid(int empid) {
//	this->emp_id = empid;
//}
//
//void Employee::setEmpname(char* name) {
//	strcpy(emp_name,name);
//}
//
//void Employee::setSalary(double salary) {
//	this->salary = salary;
//}
//
//int main() {
//
//	Employee e1;
//	e1.Accept();
//	e1.Display();
//
//	char name [] = "Durgesh";
//	Employee e2(101,name, 54000.4567);
//	e2.Display();
//	e2.Accept();
//	e2.Display();
//
//	int choice,n=0;
//	
//	Employee* e=0; //you can give here n
//	int i=0;
//
//	while(true)
//	{
//		cout << "\n MENU \n" << "1.Insert data\n" << "2.Update Data\n" << "3.Display Data\n"<<"4.exit\n";
//
//		cout << "Enter your choice : ";
//		cin >> choice;
//
//		switch (choice)
//		{
//			case 1:
//				cout << "Enter how many records : ";
//				cin >> n;
//				e = new Employee[n];
//				for (int i = 0; i < n; i++) {
//					e[i].Accept();
//				}
//					break;
//
//			case 2: int id;
//				cout << "Enter which employee id record you want to update : ";
//				cin >> id;
//
//				for (int i = 0; i < n; i++) {
//					if (id == e[i].getEmpid()) {
//						int salary;
//						char name[] = "";
//						cout << "Enter name : ";
//						cin >> name;
//						cout << "Enter Salary : ";
//						cin >> salary;
//						e[i].setEmpname(name);
//						e[i].setSalary(salary);
//						e[i].Display();
//						break;
//					}
//				}
//				break;
//
//			case 3: for (int i = 0; i < n; i++) {
//				e[i].Display();
//			}
//				  break;
//
//			case 4: exit(0);
//
//			default: cout << "Invalid Choice...";
//				break;
//		}
//	}
//}