//#include<iostream>
//using namespace std;
//
//template<typename T>
//class Stack {
//	int size;
//	T arr[100];
//	int top;
//public:
//	Stack();
//	Stack(int size);
//	void push(T data);
//	T pop();
//	bool isfull();
//	bool isempty();
//};
//template<typename T>
//bool Stack<T>::isfull() {
//	return top == size - 1;
//}
//template<typename T>
//bool Stack<T>::isempty() {
//	return top == -1;
//}
//template<typename T>
//Stack<T>::Stack() {
//	this->size = 5;
//	top = -1;
//}
//template<typename T>
//Stack<T>::Stack(int size) {
//	this->size = size;
//	top = -1;
//}
//template<typename T>
//void Stack<T>::push(T data) {
//	if (!isfull()) {
//		arr[++top] = data;
//	}
//	else {
//		cout << "overflow!" << endl;
//	}
//}
//template<typename T>
//T Stack<T>::pop() {
//	if (!isempty()) {
//		return arr[top--];
//	}
//	else
//	{
//		cout << "underflow!" << endl;
//		return NULL;
//	}
//}
//int main() {
//	Stack<int> s1;
//	s1.push(10);
//	s1.push(20);
//	s1.push(30);
//	s1.push(40);
//	s1.push(60);
//
//	cout << s1.pop() << endl;
//	cout << s1.pop() << endl;
//	cout << s1.pop() << endl;
//	cout << s1.pop() << endl;
//	cout << s1.pop() << endl;
//
//	Stack<const char*> s2;
//	s2.push("TCS");
//	s2.push("INFOSYS");
//	s2.push("WIPRO");
//	s2.push("HCL");
//
//	cout << s2.pop();
//
//}
