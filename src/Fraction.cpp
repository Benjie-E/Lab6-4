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
#include "Fraction.h"
Fraction::Fraction(){
	numerator = 1;
	denominator = 1;
}
Fraction::Fraction(int p,int q) {
	this->numerator = p;
	this->denominator = q;
	fixSign();
}

Fraction::~Fraction() {
	// TODO Auto-generated destructor stub
}

ostream &operator<<(ostream &out, Fraction fraction)
    {
        out  << fraction.numerator << "/" <<  fraction.denominator;
        return out;
    }
istream& operator>>(istream& in,Fraction &fraction){

	in >> fraction.numerator;
	in.ignore(1,'/');
	in >>fraction.denominator;
	fraction.fixSign();
	return in;
}
Fraction::Fraction(const Fraction &other) {
	this->numerator=other.numerator;
	this->denominator=other.denominator;
}

Fraction Fraction::add(const Fraction &frac) const {

}

Fraction Fraction::subtract(const Fraction &frac) const {

}

Fraction Fraction::divide(const Fraction &frac) const {
	Fraction f;
	f.numerator=this->numerator*frac.denominator;
	f.denominator=this->denominator*frac.numerator;
	return f;
}

Fraction Fraction::multiply(const Fraction &frac) const {
	Fraction f;
	f.numerator=this->numerator*frac.numerator;
	f.denominator=this->denominator*frac.denominator;
	return f;
}

void Fraction::fixSign(){
	if(denominator<0){
		denominator=-denominator;
		numerator=-numerator;
	}
}
