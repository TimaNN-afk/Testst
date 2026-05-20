#include "pch.h"
#include "CppUnitTest.h"
#include "..\Numbers.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(absMethod)
		{
			Assert::AreEqual(Numbers::abs(10), 10, L"Ошибка модуля 1");
			Assert::AreEqual(Numbers::abs(-10), 10, L"Ошибка модуля 2");
			Assert::AreEqual(Numbers::abs(10.5), 10.5, L"Ошибка модуля 3");
			Assert::AreEqual(Numbers::abs(-10.5), 10.5, L"Ошибка модуля 4");
		}
		TEST_METHOD(sqrtMethod)
		{
			Assert::AreEqual(Numbers::sqrt(100), 10, L"Ошибка корня 1");
			Assert::AreEqual(Numbers::sqrt(4), 2, L"Ошибка корня 2");
			Assert::AreEqual(Numbers::sqrt(16), 4, L"Ошибка корня 3");
			Assert::AreEqual(Numbers::sqrt(121), 11, L"Ошибка корня 4");
		}

		TEST_METHOD(randomMethod)
		{
			int min = 0, max = 1000;
			for (int i = 0; i < 1000; ++i)
			{
				int result = Numbers::random(min, max);
				Assert::IsTrue(result >= min && result <= max, L"Ошибка рандома 1");
			}

			min = -100, max = 100;
			for (int i = 0; i < 1000; ++i) {
				int result = Numbers::random(min, max);
				Assert::IsTrue(result >= min && result <= max, L"Ошибка рандома 1");
			}
		}
		TEST_METHOD(roundLittleMethod)
		{
			Assert::AreEqual(Numbers::roundLittle(10.5), 10, L"Ошибка округления 1");
			Assert::AreEqual(Numbers::roundLittle(10.9), 10, L"Ошибка округления 2");
			Assert::AreEqual(Numbers::roundLittle(-10.5), -10, L"Ошибка округления 3");
			Assert::AreEqual(Numbers::roundLittle(-10.9), -10, L"Ошибка округления 4");
		}
		TEST_METHOD(roundBigMethod)
		{
			Assert::AreEqual(Numbers::roundBig(10.5), 11, L"Ошибка округления 1");
			Assert::AreEqual(Numbers::roundBig(10.9), 11, L"Ошибка округления 2");
			Assert::AreEqual(Numbers::roundBig(-10.5), -11, L"Ошибка округления 3");
			Assert::AreEqual(Numbers::roundBig(-10.9), -11, L"Ошибка округления 4");
		}
		TEST_METHOD(roundMathMethod)
		{
			Assert::AreEqual(Numbers::roundMath(10.5), 11, L"Ошибка округления 1");
			Assert::AreEqual(Numbers::roundMath(10.4), 10, L"Ошибка округления 2");
			Assert::AreEqual(Numbers::roundMath(-10.5), -11, L"Ошибка округления 3");
			Assert::AreEqual(Numbers::roundMath(-10.4), -10, L"Ошибка округления 4");
		}
	};
}
