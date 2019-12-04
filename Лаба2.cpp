#include<iostream>
#include<cmath>
using namespace std;
int main() {
	bool swi=0;
	int n, num_min,i,s=0,j;
	double min,mod,sum=0,a,b;
	cout << "-Razmer massiva: ";
	cin >> n;
	cout << "-a: ";
	cin >> a;
	cout << "-b: ";
	cin >> b;
	cout << "-Zapolnite massiv: \n";
	double* irr = new double[n];
	double* idd = new double[n];
	for ( i = 0; i < n; i++) {
		cin >> irr[i];
	}
	num_min = 1;
	min = fabs(irr[0]);
	for (i = 0; i < n; i++) {
		if (min > fabs(irr[i])) {
			num_min = i + 1;
			min = fabs(irr[i]);
		}
		if ((irr[i] < 0) && (swi == 0)) {
			swi = 1;

			j = i + 1;
			for ( j; j < n; j++) {
				sum =sum+ fabs(irr[j]);
			}
		}
	}
	for (i = 0; i < n; i++) {
		idd[i] = 0;
	}
	for (i = 0; i <= n;i++) {
		if (!((a <= irr[i]) && (irr[i]<=b))) {
			idd[s] = irr[i];
			s=s+1;
		}

	}
	idd[s-1] = 0;
	cout << "________________________\n\n";
	cout << "-Otvet 1): " << num_min << "\n" << "-Otvet 2): " << sum<<"\n\n";
	cout <<"-New massiv: \n";
	for (i=0; i < n; i++) {
		cout << idd[i] << "\n";
	}
	cout <<"\n\n";
	delete[] irr;
	return 0;
}