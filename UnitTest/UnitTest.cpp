#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ComplexNumber.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestModule)
		{
			ComplexNumber c(3, -4);
			int n = c.Module();
			Assert::IsTrue(n == 5);
			
		}
		TEST_METHOD(TestConjugate)
		{
			ComplexNumber c(3, -4);
			Assert::IsTrue(c.Conjugate().GetReal() == 3);
			Assert::IsTrue(c.Conjugate().GetImaginary() == 4);
		}
		TEST_METHOD(TestConstructor)
		{
			ComplexNumber c;
			Assert::IsTrue(c.GetReal() == 0);
			Assert::IsTrue(c.GetImaginary() == 0);
		}
		TEST_METHOD(TestConstructorDouble)
		{
			ComplexNumber c(2, 0);
			Assert::IsTrue(c.GetReal() == 2);
			Assert::IsTrue(c.GetImaginary() == 0);
		}
		TEST_METHOD(TestConstructorComplex)
		{
			ComplexNumber c(2, 3);
			Assert::IsTrue(c.GetReal() == 2);
			Assert::IsTrue(c.GetImaginary() == 3);
		}
		//+
		TEST_METHOD(TestOperatorPlus)
		{
			ComplexNumber complex1{ 3, -4 };
			ComplexNumber complex2{ 4, 0 };
			ComplexNumber result{};
			result += (complex1 + complex2);
			Assert::IsTrue(result.GetReal() == 7);
			Assert::IsTrue(result.GetImaginary() == -4);
			result = complex1 + 1;
			Assert::IsTrue(result.GetReal() == 4);
			Assert::IsTrue(result.GetImaginary() == -4);
		}
		//-
		TEST_METHOD(TestOperatorMinus)
		{
			ComplexNumber complex1{ 3, -4 };
			ComplexNumber complex2{ 4, 0 };
			ComplexNumber result{0,0};
			result = (complex1 - complex2);
			Assert::IsTrue(result.GetReal() == -1);
			Assert::IsTrue(result.GetImaginary() == -4);
			result = complex1 - 1;
			Assert::IsTrue(result.GetReal() == 2);
			Assert::IsTrue(result.GetImaginary() == -4);
			complex1 -= 1;
			Assert::IsTrue(result.GetReal() == 2);
			Assert::IsTrue(result.GetImaginary() == -4);
			//унарный плюс
		}
		//*
		TEST_METHOD(TestOperatorMultiplication)
		{
			ComplexNumber complex1{ 3, -4 };
			ComplexNumber complex2{ 1, 13 };
			ComplexNumber result{};
			result += (complex1 * complex2);
			Assert::IsTrue(result.GetReal() == 55);
			Assert::IsTrue(result.GetImaginary() == 35);
			ComplexNumber complex3{ 6, -4 };
			result = (complex3 * 2);
			Assert::IsTrue(result.GetReal() == 12);
			Assert::IsTrue(result.GetImaginary() == -8);
		}
		// /
		TEST_METHOD(TestOperatorDivision)
		{
			ComplexNumber complex1{ 3, -4 };
			ComplexNumber complex2{ 1, 13 };
			double epsilon = 0.05;
			ComplexNumber result{};
			result += (complex1 / complex2);
			Assert::IsTrue(abs(abs(result.GetReal()) - abs(- 0.288235))<= epsilon);
			Assert::IsTrue(abs(abs(result.GetImaginary()) - abs(-0.252941)<=epsilon));
			ComplexNumber complex3{6, -4 };
			result = (complex3 * 2);
			Assert::IsTrue(result.GetReal() == 3);
			Assert::IsTrue(result.GetImaginary() == -2);

		}
		//++
		TEST_METHOD(TestOperatorIncrement)
		{
			ComplexNumber complex1{ 3, -4 };
			complex1++;

			Assert::IsTrue(complex1.GetReal() == 4);
			Assert::IsTrue(complex1.GetImaginary() == -4);

			complex1--;

			Assert::IsTrue(complex1.GetReal() == 3);
			Assert::IsTrue(complex1.GetImaginary() == -4);
		}
		// --
		TEST_METHOD(TestOperatorDecrement)
		{
			ComplexNumber complex1{ 3, -4 };

			complex1--;

			Assert::IsTrue(complex1.GetReal() == 2);
			Assert::IsTrue(complex1.GetImaginary() == -4);
		}
		TEST_METHOD(TestOperatorAssigment)
		{
			ComplexNumber complex1{ 3, -4 };

			complex1--;

			Assert::IsTrue(complex1.GetReal() == 2);
			Assert::IsTrue(complex1.GetImaginary() == -4);
		}
		TEST_METHOD(TestOperatorRelational)
		{
			ComplexNumber complex1{ 3, -4 };
			ComplexNumber complex2{ 1, -4 };
			ComplexNumber complex3{ 3, -4 };
			bool f;
			if (complex1 == complex2)f = true;
			else f = false;
			Assert::IsTrue(f == false);
			if (complex1 != complex2)f = true;
			else f = false;
			Assert::IsTrue(f == true);
			//string stream
		}
		TEST_METHOD(TestOperatorIn)
		{
			std::string line;

			//string stream
		}

	};
}
