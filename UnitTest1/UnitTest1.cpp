#include "pch.h"
#include "CppUnitTest.h"
#include "..\CPP-ConsoleApp\Triangle.h"
#include "..\CPP-ConsoleApp\Square.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(ConfirmSquareArea)
		{
			float expected = 10.0f * 10.0f;
			Square s(10, 10);

			// uncomment this line if you want something to fail - just to confirm...
			//Assert::AreEqual(52.0f, s.GetArea(), 0.00025f, 0, 0);
			Assert::AreEqual(expected, s.GetArea(), 0.00025f, 0, 0);
		}

		TEST_METHOD(ConfirmTriangleArea)
		{
			float expected = 10.0 * 10.0 * .5f;
			Triangle t(10, 10);

			// uncomment this line if you want something to fail - just to confirm...
			//Assert::AreEqual(52.0f, t.GetArea(), 0.00025f, 0, 0);
			Assert::AreEqual(expected, t.GetArea(), 0.00025f, 0, 0);
		}
	};
}
