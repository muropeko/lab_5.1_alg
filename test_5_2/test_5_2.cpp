#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test52
{
	TEST_CLASS(test52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int S, A;
			S = (1, 1, 2, 10);
			A = (1, 2, 1);
			Assert::AreEqual(S, 10);
			Assert::AreEqual(A, 1);

		}
	};
}
