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
#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Fraction {
public:
	Fraction(int p,int q);
	Fraction();
	~Fraction();
	Fraction(const Fraction &other);
	friend ostream &operator<<(ostream &out, Fraction fraction);
	friend istream& operator>>(istream& in, Fraction &fraction);


	Fraction operator+(const Fraction& frac) const{return add(frac);};
	Fraction operator-(const Fraction& frac) const{return subtract(frac);};
	Fraction operator/(const Fraction& frac) const{return divide(frac);};
	Fraction operator*(const Fraction& frac) const{ return multiply(frac);};

	bool operator<(const Fraction& frac) const;
	bool operator<=(const Fraction& frac) const;
	bool operator==(const Fraction& frac) const;
	bool operator>=(const Fraction& frac) const;
	bool operator>(const Fraction& frac) const;

	int getDenominator() const {return denominator;}
	int getNumerator() const {return numerator;}
	void setDenominator(int denominator) { this->denominator=denominator; }
	void setNumerator(int numerator) { this->numerator=numerator; }
	float toDecimal() const;

	void fixSign();
	bool divideByZero();
	void simplify();
private:
	Fraction add(const Fraction& frac) const;
	Fraction subtract(const Fraction& frac) const;
	Fraction divide(const Fraction& frac) const;
	Fraction multiply(const Fraction& frac) const;

	int numerator;
	int denominator;
};

#endif /* FRACTION_H_ */
