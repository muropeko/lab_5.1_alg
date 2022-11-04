#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_4_alg/lab_5_4_alg.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test54
{
	TEST_CLASS(test54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int j;
			j = D1(19, 5);
			Assert::AreEqual(j, 16);
		}
	};
}
