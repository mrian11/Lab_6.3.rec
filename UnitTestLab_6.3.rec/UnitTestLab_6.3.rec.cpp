#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_6.3.rec/LAB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab63rec
{
	TEST_CLASS(UnitTestLab63rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { -5,8,3,-2,7,6,-4 };
			int n = 7;
			double p = Sum(a, n, 0, 0);
			Assert::AreEqual(p, 8.0);
		}
	};
}
