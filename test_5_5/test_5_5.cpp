#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_5_alg/lab_5_5_alg.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test55
{
	TEST_CLASS(test55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int j, depth;
			j = f(5, 1, depth);
			Assert::AreEqual(j, 3);
		}
	};
}
