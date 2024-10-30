#include "pch.h"
#include "CppUnitTest.h"
#include "../LabAP6.2/LabAP6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForArrayFunctions
{
    TEST_CLASS(UnitTestForArrayFunctions)
    {
    public:

        TEST_METHOD(TestCreateArray)
        {
            const int n = 5;
            int arr[n];
            int Low = 10, High = 90;

            CreateArray(arr, n, Low, High);

            for (int i = 0; i < n; i++) {
                Assert::IsTrue(arr[i] >= Low && arr[i] <= High, L"Element out of bounds");
            }
        }

        TEST_METHOD(TestFindMaxOddElement)
        {
            const int n = 5;
            int arr[n] = { 15, 28, 37, 45, 10 };

            int maxOdd = FindMaxOddElement(arr, n);

            Assert::AreEqual(45, maxOdd, L"Max odd element should be 45");
        }

        TEST_METHOD(TestFindMaxOddElementNoOdds)
        {
            const int n = 4;
            int arr[n] = { 2, 4, 6, 8 };

            int maxOdd = FindMaxOddElement(arr, n);

            Assert::AreEqual(-1, maxOdd, L"Should return -1 when no odd elements are present");
        }

        TEST_METHOD(TestPrintArray)
        {
            const int n = 5;
            int arr[n] = { 1, 2, 3, 4, 5 };
            PrintArray(arr, n);
        }
    };
}
