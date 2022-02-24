#include "Rational.h"
#include <iostream>
#include <Windows.h>
using namespace std;


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

	r.Init(3, 5);
	r1.Init(10, 15);
	r.Display();
	r1.Display();
	cout << endl;

	cout << r.getA() << "/" << r.getB() << " == " << r1.getA() << "/" << r1.getB() << " = " << r.equal(r1) << endl;
	cout << r.getA() << "/" << r.getB() << " > " << r1.getA() << "/" << r1.getB() << " = " << r.great(r1) << endl;
	cout << r.getA() << "/" << r.getB() << " < " << r1.getA() << "/" << r1.getB() << " = " << r.less(r1) << endl;

	cout << endl;

	cout << r.getA() << "/" << r.getB() << " == " << r1.getA() << "/" << r1.getB() << " = " << equal(r, r1) << endl;
	cout << r.getA() << "/" << r.getB() << " > " << r1.getA() << "/" << r1.getB() << " = " << great(r, r1) << endl;
	cout << r.getA() << "/" << r.getB() << " < " << r1.getA() << "/" << r1.getB() << " = " << less_than(r, r1) << endl;


	return 0;
}