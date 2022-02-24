// main.cpp
#include "Rational.h"
#include <iostream>
#include <Windows.h>
using namespace std;

Rational makeRational(int a, int b) {
	Rational r;
	r.Init(a, b);
	return r;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Rational r;
	r.Init(5, 2);
	r.Display();

	Rational r1;
	r1.Read();
	r1.Display();

	cout << endl;
	Rational r2 = add(r, r1);
	cout << r.getA() << "/" << r.getB() << " + " << r1.getA() << "/" << r1.getB() << " = " << r2.getA() << "/" << r2.getB() << endl;
	r2 = sub(r, r1);
	cout << r.getA() << "/" << r.getB() << " - " << r1.getA() << "/" << r1.getB() << " = " << r2.getA() << "/" << r2.getB() << endl;
	r2 = mult(r, r1);
	cout << r.getA() << "/" << r.getB() << " * " << r1.getA() << "/" << r1.getB() << " = " << r2.getA() << "/" << r2.getB() << endl;
	r2 = div(r, r1);
	cout << r.getA() << "/" << r.getB() << " : " << r1.getA() << "/" << r1.getB() << " = " << r2.getA() << "/" << r2.getB() << endl;

	cout << endl;

	r2 = r.add(r1);
	cout << r.getA() << "/" << r.getB() << " + " << r1.getA() << "/" << r1.getB() << " = " << r2.getA() << "/" << r2.getB() << endl;
	r2 = r.sub(r1);
	cout << r.getA() << "/" << r.getB() << " - " << r1.getA() << "/" << r1.getB() << " = " << r2.getA() << "/" << r2.getB() << endl;
	r2 = r.mult(r1);
	cout << r.getA() << "/" << r.getB() << " * " << r1.getA() << "/" << r1.getB() << " = " << r2.getA() << "/" << r2.getB() << endl;
	r2 = r.div(r1);
	cout << r.getA() << "/" << r.getB() << " : " << r1.getA() << "/" << r1.getB() << " = " << r2.getA() << "/" << r2.getB() << endl;

	cout << endl;

	Rational r3 =  makeRational(3, 5);
	Rational r4 = makeRational(10, 15);
	r3.Display();
	r4.Display();
	cout << endl;

	cout << r3.getA() << "/" << r3.getB() << " == " << r4.getA() << "/" << r4.getB() << " = " << r3.equal(r4) << endl;
	cout << r3.getA() << "/" << r3.getB() << " > " << r4.getA() << "/" << r4.getB() << " = " << r3.great(r4) << endl;
	cout << r3.getA() << "/" << r3.getB() << " < " << r4.getA() << "/" << r4.getB() << " = " << r3.less(r4) << endl;

	cout << endl;

	cout << r3.getA() << "/" << r3.getB() << " == " << r4.getA() << "/" << r4.getB() << " = " << equal(r3, r4) << endl;
	cout << r3.getA() << "/" << r3.getB() << " > " << r4.getA() << "/" << r4.getB() << " = " << great(r3, r4) << endl;
	cout << r3.getA() << "/" << r3.getB() << " < " << r4.getA() << "/" << r4.getB() << " = " << less_than(r3, r4) << endl;


	return 0;
}