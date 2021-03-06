/*
 Author:       Benjie
 Class:        CSI-240-03
 Assignment:   Lab6-4
 Date Created: Mar 8, 2022
 Description: Fraction
 Certification of Authenticity:
 I certify that this is entirely my own work, except where I have given
 fully-documented references to the work of others. I understand the
 definition and consequences of plagiarism and acknowledge that the assessor
 of this assignment may, for the purpose of assessing this assignment:
 - Reproduce this assignment and provide a copy to another member of
 academic staff; and/or
 - Communicate a copy of this assignment to a plagiarism checking
 service (which may then retain a copy of this assignment on its
 database for the purpose of future plagiarism checking)
 */

#include <iostream>
#include "Fraction.h"
using namespace std;
int main(){
	cout << "Enter fraction 1:";
	Fraction f1;
	cin >> f1;
	cout << "Enter fraction 2:";
	Fraction f2;
	cin >> f2;
	cout << f1<<" + " << f2 << " = " << f1+f2 << endl;
	cout << f1<<" - " << f2 << " = " << f1-f2 << endl;
	cout << f1<<" * " << f2 << " = " << f1*f2 << endl;
	cout << f1<<" / " << f2 << " = " << f1/f2 << endl;

	cout << boolalpha;
	cout << f1<<" > " << f2 << " = " << (f1>f2) << endl;
	cout << f1<<" >= " << f2 << " = " << (f1>=f2) << endl;
	cout << f1<<" == " << f2 << " = " << (f1==f2) << endl;
	cout << f1<<" <= " << f2 << " = " << (f1<=f2) << endl;
	cout << f1<<" < " << f2 << " = " << (f1<f2) << endl;
}


