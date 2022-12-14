#include <stdio.h>
#include <iostream>
using namespace std;

int number; 

int f(int n) {
	if (n < 0) {
		return -1;
	}
	else if (n == 0) {
		return 0;
	}
	else {
		return 1;
	}
}

/*int main() {
	cout << "Bitte Zahl eingeben: " << endl;
	cin >> number;
	cout << "f(" << number << ") = " << f(number) << endl;
}*/