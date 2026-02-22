#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{
	TEST_CLASS(TestMethods)
	{
	public:

		TEST_METHOD(TestGetPerimeter_ValidDimensions_ReturnsCorrectValue)
		{
			int length = 92;
			int width = 3;
			int expectedPerimeter = 190;
			int actualPerimeter = getPerimeter(&length, &width);
			Assert::AreEqual(expectedPerimeter, actualPerimeter);
		}
		TEST_METHOD(TestGetArea_ValidDimensions_ReturnsCorrectValue) {
			int length = 520;
			int width = 23;
			int expectedArea = 11960;
			int actualArea = getArea(&length, &width);
			Assert::AreEqual(expectedArea, actualArea);
		}
	};
}