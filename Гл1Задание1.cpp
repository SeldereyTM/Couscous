#include<iostream>
#include<locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	cout << "Elvis\nУлица Пушкина, Дом Колотушкина\n";
	system("pause");
	return 0;
}