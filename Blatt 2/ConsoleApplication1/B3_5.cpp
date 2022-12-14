#include <stdio.h>
#include <iostream>
using namespace std;

double x1, x2;
double p, q;

void check() {
	double xSquare = x1 * x1;
	double erg = xSquare + p * x1 + q;
	cout << xSquare << " + " << p * x1 << " + " << q << " = " << erg << endl;

	xSquare = x2 * x2;
	erg = xSquare + p * x2 + q;
	cout << xSquare << " + " << p * x2 << " + " << q << " = " << erg << endl;
}

void calc(double p , double q) {
	double det = pow((p/2.0),2.0) - q;
	if (det >= 0) {
		x1 = -1 * (p / 2.0) + sqrt(det);
		x2 = -1 * (p / 2.0) - sqrt(det);
		cout << "x1: " << x1 << "; x2: " << x2 << endl;
		check();
	}
	else {
		cout << "Keine reele Lösung";
	}
}




/*int main() {
	cout << "Bitte p eingeben: " << endl;
	cin >> p;
	cout << "Bitte q eingeben: " << endl;
	cin >> q;
	calc(p, q);
	
}*/
