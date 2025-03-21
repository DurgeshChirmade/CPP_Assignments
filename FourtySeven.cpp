//#include<iostream>
//using namespace std;
//
//class Account {
//	int accno;
//	char name[100];
//	double balance;
//public:
//	Account();
//	Account(int accno, const char* name, double balance);
//	void accept();
//	void display();
//	int getBalance();
//	//virtual int CalculateNetBalance() = 0;
//};
//Account::Account() {
//	this->accno = 0;
//	strcpy(name, "");
//	this->balance = 0.0;
//}
//Account::Account(int accno, const char*, double balance) {
//	this->accno = accno;
//	strcpy(this->name, name);
//	this->balance = balance;
//}
//void Account::accept() {
//	cout << "Enter account number : ";
//	cin >> accno;
//
//	cout << "Enter account holder name : ";
//	cin >> name;
//
//	cout << "Enter balance : ";
//	cin >> balance;
//}
//void Account::display() {
//	cout << accno << " " << name << " " << balance<<" ";
//}
//int Account::getBalance() {
//	return balance;
//}
//
//class SavingsAccount :public Account {
//	double ri;
//	int p;
//public:
//	SavingsAccount();
//	SavingsAccount(double ri, int p);
//	void accept();
//	void display();
//	int CalculateNetBalance();
//};
//SavingsAccount::SavingsAccount() {
//	this->ri = 0.0;
//	this->p = 0;
//}
//SavingsAccount::SavingsAccount(double ri, int p) {
//	this->ri = ri;
//	this->p = p;
//}
//void SavingsAccount::accept() {
//	Account::accept();
//	cout << "Enter rate of interest per month : ";
//	cin >> ri;
//	cout << "Enter period of saving in months : ";
//	cin >> p;
//}
//void SavingsAccount::display() {
//	Account::display();
//	cout << endl<<ri << " " << p;
//}
//int SavingsAccount::CalculateNetBalance(){
//	int net_balance = Account::getBalance() + (ri * p);
//	cout << endl << net_balance<<endl;
//	return net_balance;
//}
//class CurrentAmount : public Account {
//	int ovramt;
//public:
//	CurrentAmount();
//	CurrentAmount(int ovramt);
//	void accept();
//	void display();
//};
//CurrentAmount::CurrentAmount() {
//	this->ovramt = 0;
//}
//CurrentAmount::CurrentAmount(int ovramt) {
//	this->ovramt = ovramt;
//}
//void CurrentAmount::accept() {
//	Account::accept();
//	cout << "Enter Overlimit Amount : ";
//	cin >> ovramt;
//}
//void CurrentAmount::display() {
//	Account::display();
//	cout << ovramt << " ";
//}
//int main() {
//
//	Account ac;
//	SavingsAccount sa;
//	CurrentAmount ca;
//
//	/*ac = &sa;
//	ac->accept();
//	ac->display();*/
//
//	sa.accept();
//	sa.display();
//	cout<<sa.CalculateNetBalance();
//
//	int ch;
//
//	while (1) {
//		cout << "\n MENU " << "\n 1.create object of Account" << "\n2.create object of savings account" << "\n3.create object of current account" << "\n4.exit\n";
//
//		cout << "Enter your choice : ";
//		cin >> ch;
//
//		switch(ch) {
//		case 1: ac.accept();
//				ac.display();
//				break;
//
//		case 2: sa.accept();
//				sa.display();
//				sa.CalculateNetBalance();
//				break;
//
//		case 3: ca.accept();
//				ca.display();
//				break;
//
//		case 4: exit(0);
//		default: cout << "Invalid Input......";
//		}
//	}
//
//}