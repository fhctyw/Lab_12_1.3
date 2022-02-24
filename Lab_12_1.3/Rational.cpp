#include "Rational.h"
#include <iostream>
using namespace std;

void Rational::Display() const
{
	cout << a << "/" << b << " = " << value() << endl;
}

void Rational::Init(double a, double b)
{
	setA(a);
	setB(b);
}

void Rational::Read()
{
	cout << "¬вед≥ть чисельник: "; cin >> a;
	cout << "¬вед≥ть знаменник: "; cin >> b;
}

void Rational::setA(double a)
{
	this->a = a;
}

void Rational::setB(double b)
{
	this->b = b;
}

int Rational::getA() const
{
	return a;
}

int Rational::getB() const
{
	return b;
}

double Rational::value() const
{
	return 1. * a / b;
}

Rational Rational::add(const Rational& r)
{
	Rational tmp;
	tmp.a = a * r.b + b * r.a;
	tmp.b = b * r.b;
	tmp.Reduce();
	return tmp;
}

Rational Rational::sub(const Rational& r)
{
	Rational tmp;
	tmp.a = a * r.b - b * r.a;
	tmp.b = b * r.b;
	tmp.Reduce();
	return tmp;
}

Rational Rational::div(const Rational& r)
{
	Rational tmp;
	tmp.a = a * r.b;
	tmp.b = r.a * b;
	tmp.Reduce();
	return tmp;
}

Rational Rational::mult(const Rational& r)
{
	Rational tmp;
	tmp.a = a * r.a;
	tmp.b = b * r.b;
	tmp.Reduce();
	return tmp;
}

bool Rational::equal(const Rational& r)
{
	Rational f = *this, s = r;
	f.Reduce();
	s.Reduce();
	return s.a == f.a && s.b == f.b;
}

bool Rational::great(const Rational& r)
{
	int f = a * r.b;
	int s = b * r.a;
	return f > s;
}

bool Rational::less(const Rational& r)
{
	int f = a * r.b;
	int s = b * r.a;
	return f < s;
}

void Rational::Reduce()
{
	int i;
	do
	{
		for (i = abs(std::min(a, b)); i > 0; i--)
		{
			if (a % i == 0 && b % i == 0) {
				a /= i;
				b /= i;
				break;
			}
		}
	} while (i != 1);
}

Rational add(const Rational& l, const Rational& r)
{
	Rational tmp;
	tmp.a = l.a * r.b + l.b * r.a;
	tmp.b = l.b * r.b;
	tmp.Reduce();
	return tmp;
}

Rational sub(const Rational& l, const Rational& r)
{
	Rational tmp;
	tmp.a = l.a * r.b - l.b * r.a;
	tmp.b = l.b * r.b;
	tmp.Reduce();
	return tmp;
}

Rational div(const Rational& l, const Rational& r)
{
	Rational tmp;
	tmp.a = l.a * r.b;
	tmp.b = r.a * l.b;
	tmp.Reduce();
	return tmp;
}

Rational mult(const Rational& l, const Rational& r)
{
	Rational tmp;
	tmp.a = l.a * r.a;
	tmp.b = l.b * r.b;
	tmp.Reduce();
	return tmp;
}

bool equal(const Rational& l, const Rational& r)
{
	Rational f = l, s = r;
	f.Reduce();
	s.Reduce();
	return f.a == s.a && s.a && s.b;
}

bool great(const Rational& l, const Rational& r)
{
	int f = l.a * r.b;
	int s = l.b * r.a;
	return f > s;
}

bool less_than(const Rational& l, const Rational& r)
{
	int f = l.a * r.b;
	int s = l.b * r.a;
	return f < s;
}
