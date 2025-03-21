//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class Account {
//	int balance;
//public:
//	Account();
//	void deposite(int amount);
//	void withdrawl(int amount);
//};
//Account::Account() {
//	balance = 17000;
//}
//void Account::deposite(int amount) {
//	balance = balance - amount;
//}
//void Account::withdrawl(int amount) {
//	if (amount > 15000)
//		throw "Overlimit ! Amount yout have given is more than 15000";
//	if (amount > balance)
//		throw "Insufficient ! Amount you given is greater than balance.";
//	balance = balance - amount;
//}
//int main() {
//	Account a1;
//
//	try {
//		//a1.withdrawl(16000);
//		a1.withdrawl(5000);
//		a1.withdrawl(14000);
//	}
//	catch (char const* msg) {
//		cout << msg << endl;;
//	}
//}
