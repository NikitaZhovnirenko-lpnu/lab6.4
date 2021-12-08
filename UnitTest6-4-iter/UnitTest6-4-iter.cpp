#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6-4-iter/main.hpp"
#include "../Lab6-4-iter/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64iter
{
	TEST_CLASS(UnitTest64iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double arr[] = { 1.0, 2.0, 3.0, 4.0 };

			moveLeftArray(arr, 4, 1);
			Assert::AreEqual(2.0, arr[0]);
			Assert::AreEqual(0.0, arr[3]);
		}
	};
}
