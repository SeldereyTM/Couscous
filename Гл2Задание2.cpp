#include<iostream>
#include<locale.h>
using namespace std;
int main() {
	int i;
	setlocale(LC_ALL, "RUS");
	cout << "������� ���������� � ���������: ";
	cin >> i;
	while ((!cin == 1) || (i<0)) {
		cerr << "\ninput error\n";
		cin >> i;
	}
	cout << "\n���������� � �����: " << i * 220<<"\n\n";

	system("pause");
	return 0;
}