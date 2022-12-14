#include <iostream>
#include <string>
#include <stdio.h>
#include <bitset>
using namespace std;

long long number;
basic_string<char, char_traits<char>, allocator<char>> numbers = "";
int pruef;
int i =0;
int temp;
int erg = 0;


void doISBN() {
	erg += (numbers[i]-'0') * (i + 1); //char '0' abziehen, da bei numbers[i] der char genommen wird und 0 den wert 48 hat und danach hochgezählt wird;
	cout << numbers[i] << " i " << i << " erg " << erg << endl;
	i++;
	if (i < 9) {
		doISBN();
	}
	else {
		cout << "erg " << erg << endl;
 		pruef = erg % 11;
		if (pruef != 10) {
			cout << "Pruefziffer: " << pruef << endl;
		} 
		else {
			cout << "Pruefziffer: X" << endl;
		}
		
	}
	
}

void doEAN() {
	 
	if ((i+1) % 2 == 0) {
		erg += (numbers[i] - 48) * 3;
	}
	else {
		erg += (numbers[i] - 48);
	}

	i++;

	if (i < 12) {
		doEAN();
	}
	else {
		pruef = (ceil(double(erg) / 10.0)) * 10 - erg;
		cout << "Pruefziffer: " << pruef << endl;
	}


}


/*int main() {
	cout << "A: ISBN; B: EAN. Please enter char corresponding to your choice. \n" << endl;
	string choice;
	cin >> choice;
	
	if (choice == "A") {
		cout << "Please enter ISBN" << endl;
		cin >> number;
		numbers.append(to_string(number));
		doISBN();
		
	}
	else {
		if (choice == "B") {
			cout << "Please enter EAN" << endl;
			cin >> number;
			numbers.append(to_string(number));
			doEAN();
		}
		else {
			cout << "No valid choice" << endl;
		}
	}
}*/