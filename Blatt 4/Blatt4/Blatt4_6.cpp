#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	int dezzahl; 
	cin >> dezzahl;
	int anzStellen = 0;
	int r;

	while (dezzahl > pow(2, anzStellen)) {
		anzStellen++;
	}

	//vector<int> binzahl;

	for (int i = 0; i < anzStellen; i++) {
		cout << dezzahl % 2;
		//binzahl[i] = dezzahl % 2;
		dezzahl /= 2;
	}

	//for (int i = anzStellen; i > 0; i--) {
		//cout << binzahl[i];
	//}
}