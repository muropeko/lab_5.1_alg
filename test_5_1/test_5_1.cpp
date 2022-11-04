#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test51
{
	TEST_CLASS(test51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int h;
			h = (1,2);
			Assert::AreEqual(h, 62);
		}

	};
}
