#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_9.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1) //тест перевіряє, чи правильно працює структура Student
        {
            Student student;
            student.surname = "Test";
            student.course = 1;
            student.specialty = ComputerScience;
            student.physicsGrade = 5;
            student.mathGrade = 5;
            student.additionalGrade = 5;

            Assert::AreEqual(student.surname, std::string("Test"));
            Assert::AreEqual(student.course, 1);
            Assert::AreEqual((int)student.specialty, (int)ComputerScience);
            Assert::AreEqual(student.physicsGrade, 5);
            Assert::AreEqual(student.mathGrade, 5);
            Assert::AreEqual(student.additionalGrade, 5);
        }
		
	};
}
