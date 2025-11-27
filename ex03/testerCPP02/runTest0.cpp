#include "Tester.hpp"
#include "Fixed.hpp"

static void test1()
{
	Tester::startTest("default constructor");
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		int actual = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test2()
{
	Tester::startTest("copy constructor");
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		int actual1 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual1);

		std::cout.setstate(std::ios_base::failbit);
		Fixed b(a);
		int actual2 = a.getRawBits();
		int actual3 = b.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual2);
		Tester::assertExpectedEqualsActual(0, actual3);

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(42);
		int actual4 = a.getRawBits();
		int actual5 = b.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, actual4);
		Tester::assertExpectedEqualsActual(0, actual5);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		a.setRawBits(4242);
		int actual1 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(4242, actual1);

		std::cout.setstate(std::ios_base::failbit);
		Fixed b(a);
		int actual2 = a.getRawBits();
		int actual3 = b.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(4242, actual2);
		Tester::assertExpectedEqualsActual(4242, actual3);

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(42);
		int actual4 = a.getRawBits();
		int actual5 = b.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, actual4);
		Tester::assertExpectedEqualsActual(4242, actual5);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test3()
{
	Tester::startTest("copy assignment operator overload");
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		int actual1 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual1);

		std::cout.setstate(std::ios_base::failbit);
		Fixed b = a;
		int actual2 = a.getRawBits();
		int actual3 = b.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual2);
		Tester::assertExpectedEqualsActual(0, actual3);

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(42);
		int actual4 = a.getRawBits();
		int actual5 = b.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, actual4);
		Tester::assertExpectedEqualsActual(0, actual5);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		a.setRawBits(4242);
		int actual1 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(4242, actual1);

		std::cout.setstate(std::ios_base::failbit);
		Fixed b = a;
		int actual2 = a.getRawBits();
		int actual3 = b.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(4242, actual2);
		Tester::assertExpectedEqualsActual(4242, actual3);

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(42);
		int actual4 = a.getRawBits();
		int actual5 = b.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, actual4);
		Tester::assertExpectedEqualsActual(4242, actual5);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test4()
{
	Tester::startTest("function int getRawBits( void ) const");
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		a.setRawBits(0);
		int actual = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		a.setRawBits(42);
		int actual = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		a.setRawBits(-42);
		int actual = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-42, actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		a.setRawBits(-0);
		int actual = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test5()
{
	Tester::startTest("function void setRawBits( int const raw )");
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		int actual1 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual1);

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(0);
		int actual2 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual2);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		int actual1 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual1);

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(42);
		int actual2 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, actual2);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		int actual1 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual1);

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(-42);
		int actual2 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-42, actual2);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		int actual1 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual1);

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(-0);
		int actual2 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, actual2);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	std::cout.setstate(std::ios_base::failbit);
	{
		Fixed a;
		a.setRawBits(42);
		Fixed b = a;
		int actual1 = a.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, actual1);

		std::cout.setstate(std::ios_base::failbit);
		b.setRawBits(-420);
		int actual2 = b.getRawBits();
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-420, actual2);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

/**
 * @brief Function which execute all tests.
 * @details For each test, you can use functions like :
 * Tester::assertExpectedEqualsActual(expected, actual)
 * Tester::assertExpectedNotEqualsActual(expected, actual)
 * Tester::assertTrue(condition)
 * Tester::assertFalse(condition)
 * Tester::assertNull(ptr)
 * Tester::assertNotNull(ptr)
 */
void runTest()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	std::cout << std::endl << std::endl;
}
