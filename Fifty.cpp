//#include<iostream>
//using namespace std;
//
//template<typename T>
//void Bubble_sort(T *a, int n) {
//	T temp;
//	for (int i = n - 1; i >= 0; i--) {
//		for (int j = 0; j < i; j++) {
//			if (a[j] > a[j + 1]) {
//				temp = a[j];
//				a[j] = a[j+1];
//				a[j+1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[5] = { 22,44,33,55,11 };
//	Bubble_sort(arr, 5);
//	
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i]<<" ";
//	}
//
//	float a[5] = { 22.3,12.5,34.5,56.4,11.5 };
//	Bubble_sort(a, 5);
//	for (int i = 0; i < 5; i++) {
//		cout << a[i] << " ";
//	}
//}