#include<iostream>
#include<fstream>
using namespace std;

int main() {

	char str[100];

	fstream fin;
	fin.open("E:\\CDAC\\PGDAC\\KNOW-IT_Pune\\Daily_Lab\\src.txt", ios::in);

	if (!fin) {
		cout << "unable to open file." << endl;
		return 1;
	}

	while (true) {
		fin.getline(str, 100);
		if (fin.eof()) {
			break;
		}
		cout<<str<<endl;
	}

	fin.clear();
	fin.seekg(0, ios::beg);

	fstream fout;
	fout.open("E:\\CDAC\\PGDAC\\KNOW-IT_Pune\\Daily_Lab\\dest.txt",ios::out);

	if (!fout) {
		cout << "unable to open file" << endl;
		fin.close();
		return 1;
	}

	while (fin.getline(str, 100)) {
		fout << str<<endl;
	}

	fin.close();
	fout.close();

}