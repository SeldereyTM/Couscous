#include <iostream>
#include <locale.h>
using namespace std;
double input() {
	setlocale(LC_ALL, "RUS");
	double x;
	cout << "-введите значение переменной: ";
	cin >> x;
		return x;
}
double func(double a, double b, double c, double d, double x) {
	if (((x < 1) && (c != 0)) || ((x > 15) && (c == 0))) {
		if ((x < 1) && (c != 0)) {
			return ((a * x * x) + (b / c));
		}
		if ((x > 15) && (c == 0)) {
			return ((x - a) / ((x - c) * (x - c)));
		}
	}
	else {
		return (x * x / c / c);
	}
}

int main()
{
	double a, b, c, d, x, F_double, left, right, dX;
	int ac, bc, cc, F_int;
	cout << "-left point: ";
	cin >> left;
	cout << "-right point: ";
	cin >> right;
	cout << "-dX- ";
	cin >> dX;
	a = input();
	b = input();
	c = input();
	d = input();
	ac = a / 1;
	bc = b / 1;
	cc = c / 1;
	for (x = left; x < right; x += dX) {
		if (((ac & bc) ^ cc) != 0) {
			F_double = func(a, b, c, d, x);
			cout <<x<<" | "<< F_double<<"\n";
		}
		else {
			F_int = func(a, b, c, d, x);
			cout <<x<< " | " << F_int<<"\n";
		}
	}
}