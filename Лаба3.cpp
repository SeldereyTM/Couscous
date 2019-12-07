#include <math.h>
#include<iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b, i, j, o, counter=0;
	double k,ily,average=0;
	double** ary;
	cout << "-Vvedite a: ";
	cin >> ily;
	cout << "-Kol-vo stolbov matrix: ";
	cin >> a;
	cout<< "-Kol-vo strok matrix: ";
	cin >> b;
	ary = new double* [a];
	for (i = 0; i < a; i++)
		ary[i] = new double[b];
	cout << "-Zapolnite matrix: \n";
    for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			cin >> ary[i][j];
		}
	}
	
	for (j = 0; j < b; j++) {
		for (i = 0; i < a; i++) {
			average = (average + ary[j][i]) / a;
		}
			if (average < ily) {
				counter++;
		}
		average = 0;
	}

	for (i = 0; i < a; i++) {
		for (j = i + 1; j < b; j++) {
			k = ary[j][i] * (-1) / ary[0][i];
			
			for (o = i; o < a; o++) {
				ary[j][o] = (ary[0][o] * k) + ary[j][o];
				
			}
		}
	}
	cout << "\n________________________\n\n-New matrix: \n\n";
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << setw(4) << ary[i][j];
		}
		cout << endl;
	}
	cout << "\n"<<"-Otvet a:" << counter<<"\n\n";
    for (int i = 0; i < a; i++) {
		delete[] ary[i];
	 }
	delete[] ary;
	system("pause");

	return 0;
}

