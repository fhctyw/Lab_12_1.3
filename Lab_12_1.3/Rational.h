#pragma once
class Rational
{
	int a, b;
public:
	void Display() const;
	void Init(double a, double b);
	void Read();

	void setA(double a);
	void setB(double b);

	int getA() const;
	int getB() const;

	double value() const;

	Rational add(const Rational& r);
	Rational sub(const Rational& r);
	Rational div(const Rational& r);
	Rational mult(const Rational& r);

	bool equal(const Rational& r);
	bool great(const Rational& r);
	bool less(const Rational& r);

	friend Rational add(const Rational& l, const Rational& r);
	friend Rational sub(const Rational& l, const Rational& r);
	friend Rational div(const Rational& l, const Rational& r);
	friend Rational mult(const Rational& l, const Rational& r);

	friend bool equal(const Rational& l, const Rational& r);
	friend bool great(const Rational& l, const Rational& r);
	friend bool less_than(const Rational& l, const Rational& r);
private:
	void Reduce();
};

