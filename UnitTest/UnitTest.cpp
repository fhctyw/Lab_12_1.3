#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_1.3\Rational.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Rational r1;
			r1.Init(15, 3);
			Rational r2;
			r2.Init(2, 1);
			Assert::AreEqual(div(r1, r2).getA(), 5);
		}
	};
}
