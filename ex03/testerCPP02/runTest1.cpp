#include "Tester.hpp"
#include "Fixed.hpp"
#include <cmath>

static void test1()
{
	Tester::startTest("default constructor");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test2()
{
	Tester::startTest("copy constructor");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		Fixed b(a);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());
		Tester::assertExpectedEqualsActual(0, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(42);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, a.getRawBits());
		Tester::assertExpectedEqualsActual(0, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		a.setRawBits(4242);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(4242, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		Fixed b(a);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(4242, a.getRawBits());
		Tester::assertExpectedEqualsActual(4242, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(42);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, a.getRawBits());
		Tester::assertExpectedEqualsActual(4242, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test3()
{
	Tester::startTest("copy assignment operator overload");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		Fixed b = a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());
		Tester::assertExpectedEqualsActual(0, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(42);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, a.getRawBits());
		Tester::assertExpectedEqualsActual(0, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		a.setRawBits(4242);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(4242, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		Fixed b = a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(4242, a.getRawBits());
		Tester::assertExpectedEqualsActual(4242, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(42);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, a.getRawBits());
		Tester::assertExpectedEqualsActual(4242, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test4()
{
	Tester::startTest("function int getRawBits( void ) const");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		a.setRawBits(0);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		a.setRawBits(42);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		a.setRawBits(-42);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-42, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		a.setRawBits(-0);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test5()
{
	Tester::startTest("function void setRawBits( int const raw )");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(0);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(42);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(-42);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-42, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		a.setRawBits(-0);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		a.setRawBits(42);
		Fixed b = a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(42, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		b.setRawBits(-420);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-420, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test6()
{
	Tester::startTest("int constructor");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(0);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(5);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(5*256, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-42);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-42*256, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-0);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test7()
{
	Tester::startTest("float constructor");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(0.0f);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(5.52f);
		std::cout.clear();

		Tester::assertExpectedEqualsActual((int)roundf(5.52f*256), a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-42.1584f);
		std::cout.clear();

		Tester::assertExpectedEqualsActual((int)roundf(-42.1584f*256), a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-0);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test8()
{
	Tester::startTest("function float toFloat( void ) const");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(0.0f);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0.0f, a.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(5.52f);
		std::cout.clear();

		float expected = ((int)roundf(5.52f*256)) / 256.0;
		Tester::assertExpectedEqualsActual(expected, a.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-42.1584f);
		std::cout.clear();

		float expected = ((int)roundf(-42.1584f*256)) / 256.0;
		Tester::assertExpectedEqualsActual(expected, a.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-0);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0.0f, a.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test9()
{
	Tester::startTest("function float toInt( void ) const");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(0.0f);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.toInt());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(5.52f);
		std::cout.clear();

		int expected = ((int)roundf(5.52f*256)) / 256;
		Tester::assertExpectedEqualsActual(expected, a.toInt());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-42.1584f);
		std::cout.clear();

		int expected = ((int)roundf(-42.1584f*256)) / 256;
		Tester::assertExpectedEqualsActual(expected, a.toInt());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-0);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0, a.toInt());

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
	test6();
	test7();
	test8();
	test9();
	std::cout << std::endl << std::endl;
}
