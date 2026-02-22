#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{
	TEST_CLASS(TestMethods)
	{
	public:

		TEST_METHOD(TestGetPerimeter_Validinput)
		{
			int length = 92;
			int width = 3;
			int expectedPerimeter = 190; //2*(92+3)
			int actualPerimeter = getPerimeter(&length, &width);
			Assert::AreEqual(expectedPerimeter, actualPerimeter);
		}
		TEST_METHOD(TestGetArea_Validinput) {
			int length = 56;
			int width = 23;
			int expectedArea = 1288; //56*23
			int actualArea = getArea(&length, &width);
			Assert::AreEqual(expectedArea, actualArea);
		}
        TEST_METHOD(TestSetLength_ValidInput)
        {
            // Arrange: Usual case within 1-99 range
            int length = 67;
            int input = 93;
            setLength(input, &length);
            Assert::AreEqual(input, length);
        }

        TEST_METHOD(TestSetLength_BelowRangeInput)
        {
            int length = 34;
            int input = 44;
            setLength(input, &length);
            Assert::AreEqual(input, length);
        }

        TEST_METHOD(TestSetLength_AboveRangeInput)
        {
            // Arrange: Special case outside the 1-99 range
            int initialLength = 65;
            int invalidInput = 10;
            setLength(invalidInput, &initialLength);
            Assert::AreEqual(10, initialLength);
        }
        TEST_METHOD(TestSetWidth_ValidInput)
        {
            int width = 53;
            int input = 45;
            setWidth(input, &width);
            Assert::AreEqual(input, width);
        }

        TEST_METHOD(TestSetWidth_BelowRangeInput)
        {
            int width = 98;
            int input = 99;
            setWidth(input, &width);
            Assert::AreEqual(input, width);
        }

        TEST_METHOD(TestSetWidth_AboveRangeInput)
        {
            int initialWidth = 10;
            int invalidInput = 19;
            setWidth(invalidInput, &initialWidth);
            Assert::AreEqual(19, initialWidth);
        }
	};
}