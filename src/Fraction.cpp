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
#include <algorithm>
Fraction::Fraction(){
	numerator = 1;
	denominator = 1;
}
Fraction::Fraction(int p,int q=1) {
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
	Fraction f;
	f.setNumerator(this->numerator*frac.denominator+frac.numerator*this->denominator);
	f.setDenominator(this->denominator*frac.denominator);
	f.simplify();
	f.fixSign();
	return f;
}

Fraction Fraction::subtract(const Fraction &frac) const {
	Fraction f;
	f.setNumerator(this->numerator*frac.denominator-frac.numerator*this->denominator);
		f.setDenominator(this->denominator*frac.denominator);
		f.simplify();
		f.fixSign();
		return f;
}

Fraction Fraction::divide(const Fraction &frac) const {
	Fraction f;
	f.setNumerator(this->numerator*frac.denominator);
	f.setDenominator(this->denominator*frac.numerator);
	f.simplify();
	f.fixSign();
	return f;
}

Fraction Fraction::multiply(const Fraction &frac) const {
	Fraction f;
	f.setNumerator(this->numerator*frac.numerator);
	f.setDenominator(this->denominator*frac.denominator);
	f.simplify();
	f.fixSign();
	return f;
}

double Fraction::toDecimal() const{
	//cout << this->numerator<<this->denominator<<endl;
	double f=numerator;
	f/=denominator;
	return f;
	//return (float)numerator/(float)denominator;
}

bool Fraction::operator <(const Fraction &frac) const {
	return this->toDecimal()<frac.toDecimal();
}

bool Fraction::operator <=(const Fraction &frac) const {
	return this->toDecimal()<=frac.toDecimal();
}

bool Fraction::operator ==(const Fraction &frac) const {
	return this->toDecimal()==frac.toDecimal();
}

bool Fraction::operator >=(const Fraction &frac) const {
	return this->toDecimal()>=frac.toDecimal();
}

bool Fraction::operator >(const Fraction &frac) const {
	return this->toDecimal()>frac.toDecimal();
}

void Fraction::fixSign(){
	if(denominator<0){
		denominator=-denominator;
		numerator=-numerator;
	}
	divideByZero();
}

bool Fraction::divideByZero() {
	if(denominator==0){
		cout << "ERROR DIVIDE BY ZERO"<<endl;
		exit(10);
	}
	return false;
}
void Fraction::simplify(){
	int num=__gcd(numerator,denominator);
	numerator/=num;
	denominator/=num;
}
