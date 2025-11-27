#include "Tester.hpp"
#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>

bool bsp(Point const a, Point const b, Point const c, Point const point);

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

static void test10()
{
	Tester::startTest("Comparison Operators >");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(42.42f);
		std::cout.clear();

		Tester::assertFalse(a > b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(-42.42f);
		std::cout.clear();

		Tester::assertTrue(a > b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10);
		std::cout.clear();

		Tester::assertFalse(a > b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertFalse(a > b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.01f);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertTrue(a > b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.00f);
		Fixed b(10.01f);
		std::cout.clear();

		Tester::assertFalse(a > b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test11()
{
	Tester::startTest("Comparison Operators <");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(42.42f);
		std::cout.clear();

		Tester::assertTrue(a < b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(-42.42f);
		std::cout.clear();

		Tester::assertFalse(a < b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10);
		std::cout.clear();

		Tester::assertFalse(a < b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertFalse(a < b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.01f);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertFalse(a < b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.00f);
		Fixed b(10.01f);
		std::cout.clear();

		Tester::assertTrue(a < b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test12()
{
	Tester::startTest("Comparison Operators >=");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(42.42f);
		std::cout.clear();

		Tester::assertFalse(a >= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(-42.42f);
		std::cout.clear();

		Tester::assertTrue(a >= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10);
		std::cout.clear();

		Tester::assertTrue(a >= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertTrue(a >= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.01f);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertTrue(a >= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.00f);
		Fixed b(10.01f);
		std::cout.clear();

		Tester::assertFalse(a >= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test13()
{
	Tester::startTest("Comparison Operators <=");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(42.42f);
		std::cout.clear();

		Tester::assertTrue(a <= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(-42.42f);
		std::cout.clear();

		Tester::assertFalse(a <= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10);
		std::cout.clear();

		Tester::assertTrue(a <= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertTrue(a <= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.01f);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertFalse(a <= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.00f);
		Fixed b(10.01f);
		std::cout.clear();

		Tester::assertTrue(a <= b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test14()
{
	Tester::startTest("Comparison Operators ==");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(42.42f);
		std::cout.clear();

		Tester::assertFalse(a == b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(-42.42f);
		std::cout.clear();

		Tester::assertFalse(a == b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10);
		std::cout.clear();

		Tester::assertTrue(a == b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertTrue(a == b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.01f);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertFalse(a == b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.00f);
		Fixed b(10.01f);
		std::cout.clear();

		Tester::assertFalse(a == b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test15()
{
	Tester::startTest("Comparison Operators !=");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(42.42f);
		std::cout.clear();

		Tester::assertTrue(a != b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(-42.42f);
		std::cout.clear();

		Tester::assertTrue(a != b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10);
		std::cout.clear();

		Tester::assertFalse(a != b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertFalse(a != b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.01f);
		Fixed b(10.00f);
		std::cout.clear();

		Tester::assertTrue(a != b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(10.00f);
		Fixed b(10.01f);
		std::cout.clear();

		Tester::assertTrue(a != b);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test16()
{
	Tester::startTest("Arithmetic Operators");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(2);
		Fixed b(3.5f);
		Fixed plus(a + b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(2.0f, a.toFloat());
		Tester::assertExpectedEqualsActual(3.5f, b.toFloat());
		Tester::assertExpectedEqualsActual(5.5f, plus.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(2);
		Fixed b(3.5f);
		Fixed minus(a - b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(2.0f, a.toFloat());
		Tester::assertExpectedEqualsActual(3.5f, b.toFloat());
		Tester::assertExpectedEqualsActual(-1.5f, minus.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(2);
		Fixed b(-3.5f);
		Fixed multication(a * b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(2.0f, a.toFloat());
		Tester::assertExpectedEqualsActual(-3.5f, b.toFloat());
		Tester::assertExpectedEqualsActual(-7.0f, multication.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(2);
		Fixed b(4194302);
		Fixed multication(a * b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(2.0f, a.toFloat());
		Tester::assertExpectedEqualsActual(4194302.0f, b.toFloat());
		Tester::assertExpectedEqualsActual(8388604.0f, multication.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(2);
		Fixed b(-3.5f);
		Fixed division(b / a);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(2.0f, a.toFloat());
		Tester::assertExpectedEqualsActual(-3.5f, b.toFloat());
		Tester::assertExpectedEqualsActual(-1.75f, division.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(2);
		Fixed b(5);
		Fixed division(b / a);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(2.0f, a.toFloat());
		Tester::assertExpectedEqualsActual(5.0f, b.toFloat());
		Tester::assertExpectedEqualsActual(2.5f, division.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test17()
{
	Tester::startTest("0 division");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a;
		Fixed b(5);
		Fixed division;
		division = b / a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(0.0f, a.toFloat());
		Tester::assertExpectedEqualsActual(5.0f, b.toFloat());
		Tester::assertExpectedEqualsActual(0.0f, division.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test18()
{
	Tester::startTest("Increment/Decrement Operators");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(5.5f);
		Fixed b;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(1408, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		b = ++a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(1409, a.getRawBits());
		Tester::assertExpectedEqualsActual(1409, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-5.5f);
		Fixed b;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-1408, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		b = ++a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-1407, a.getRawBits());
		Tester::assertExpectedEqualsActual(-1407, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(5.5f);
		Fixed b;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(1408, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		b = a++;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(1409, a.getRawBits());
		Tester::assertExpectedEqualsActual(1408, b.getRawBits());
		Tester::assertExpectedEqualsActual(5.5f, b.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-5.5f);
		Fixed b;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-1408, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		b = a++;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-1407, a.getRawBits());
		Tester::assertExpectedEqualsActual(-1408, b.getRawBits());
		Tester::assertExpectedEqualsActual(-5.5f, b.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(5.5f);
		Fixed b;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(1408, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		b = --a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(1407, a.getRawBits());
		Tester::assertExpectedEqualsActual(1407, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-5.5f);
		Fixed b;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-1408, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		b = --a;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-1409, a.getRawBits());
		Tester::assertExpectedEqualsActual(-1409, b.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(5.5f);
		Fixed b;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(1408, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		b = a--;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(1407, a.getRawBits());
		Tester::assertExpectedEqualsActual(1408, b.getRawBits());
		Tester::assertExpectedEqualsActual(5.5f, b.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(-5.5f);
		Fixed b;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-1408, a.getRawBits());

		std::cout.setstate(std::ios_base::failbit);
		b = a--;
		std::cout.clear();

		Tester::assertExpectedEqualsActual(-1409, a.getRawBits());
		Tester::assertExpectedEqualsActual(-1408, b.getRawBits());
		Tester::assertExpectedEqualsActual(-5.5f, b.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test19()
{
	Tester::startTest("Min Functions");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(2.5f);
		Fixed b(3.5f);
		const Fixed& min = Fixed::min(a, b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(&(const Fixed&)a, &min);
		Tester::assertExpectedNotEqualsActual(&(const Fixed&)b, &min);
		Tester::assertExpectedEqualsActual(2.5f, min.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(2.5f);
		const Fixed b(-1.75f);
		const Fixed& min = Fixed::min(a, b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(&(const Fixed&)b, &min);
		Tester::assertExpectedNotEqualsActual(&(const Fixed&)a, &min);
		Tester::assertExpectedEqualsActual(-1.75f, min.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		const Fixed a(-1.75f);
		const Fixed b(0);
		const Fixed& min = Fixed::min(a, b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(&(const Fixed&)a, &min);
		Tester::assertExpectedNotEqualsActual(&(const Fixed&)b, &min);
		Tester::assertExpectedEqualsActual(-1.75f, min.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		const Fixed a(3.5f);
		Fixed b(3.5f);
		const Fixed& min = Fixed::min(a, b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(b, min);
		Tester::assertExpectedEqualsActual(a, min);
		Tester::assertExpectedEqualsActual(3.5f, min.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test20()
{
	Tester::startTest("Max Functions");
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(2.5f);
		Fixed b(3.5f);
		const Fixed& max = Fixed::max(a, b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(&(const Fixed&)b, &max);
		Tester::assertExpectedNotEqualsActual(&(const Fixed&)a, &max);
		Tester::assertExpectedEqualsActual(3.5f, max.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Fixed a(2.5f);
		const Fixed b(-1.75f);
		const Fixed& max = Fixed::max(a, b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(&(const Fixed&)a, &max);
		Tester::assertExpectedNotEqualsActual(&(const Fixed&)b, &max);
		Tester::assertExpectedEqualsActual(2.5f, max.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		const Fixed a(-1.75f);
		const Fixed b(0);
		const Fixed& max = Fixed::max(a, b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(&(const Fixed&)b, &max);
		Tester::assertExpectedNotEqualsActual(&(const Fixed&)a, &max);
		Tester::assertExpectedEqualsActual(0.0f, max.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		const Fixed a(3.5f);
		Fixed b(3.5f);
		const Fixed& max = Fixed::max(a, b);
		std::cout.clear();

		Tester::assertExpectedEqualsActual(b, max);
		Tester::assertExpectedEqualsActual(a, max);
		Tester::assertExpectedEqualsActual(3.5f, max.toFloat());

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
}

static void test21()
{
	Tester::startTest("Function bool bsp( Point const a, Point const b, Point const c, Point const point)");
	{
		std::cout.setstate(std::ios_base::failbit);
		Point const a(0.0f, 0.0f);
		Point const b(20.0f, 0.0f);
		Point const c(10.0f, 30.0f);
		Point const p(10, 15);
		bool actual = bsp(a, b, c, p);
		std::cout.clear();

		Tester::assertTrue(actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Point const a(-4, 4);
		Point const b(7.4f, 3.63f);
		Point const c(-2.38f, -2.45f);
		Point const p(0.62f, 1.95f);
		bool actual = bsp(a, b, c, p);
		std::cout.clear();

		Tester::assertTrue(actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Point const a(-4, 4);
		Point const b(7.4f, 3.63f);
		Point const c(-2.38f, -2.45f);
		Point const p(-3.7f, 3.75f);
		bool actual = bsp(a, b, c, p);
		std::cout.clear();

		Tester::assertTrue(actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Point const a(-4, 4);
		Point const b(7.4f, 3.63f);
		Point const c(-2.38f, -2.45f);
		Point const p(-4, 4);
		bool actual = bsp(a, b, c, p);
		std::cout.clear();

		Tester::assertFalse(actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Point const a(0, 5);
		Point const b(7.4f, 3.63f);
		Point const c(0, -2);
		Point const p(0, 0.68f);
		bool actual = bsp(a, b, c, p);
		std::cout.clear();

		Tester::assertFalse(actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Point const a(0, 5);
		Point const c(0, -2);
		Point const p(0, 0.68f);
		bool actual = bsp(a, a, c, p);
		std::cout.clear();

		Tester::assertFalse(actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Point const a(0, 5);
		Point const c(0, -2);
		Point const p(0, 6);
		bool actual = bsp(a, a, c, p);
		std::cout.clear();

		Tester::assertFalse(actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Point const a(0, 5);
		bool actual = bsp(a, a, a, a);
		std::cout.clear();

		Tester::assertFalse(actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Point const a(-4, -4);
		Point const b(1, 16);
		Point const c(12, -8);
		Point const p(0, 0);
		bool actual = bsp(a, b, c, p);
		std::cout.clear();

		Tester::assertTrue(actual);

		std::cout.setstate(std::ios_base::failbit);
	}
	std::cout.clear();
	{
		std::cout.setstate(std::ios_base::failbit);
		Point const a(-4, -4);
		Point const b(1, 16);
		Point const c(12, -8);
		Point const p(-4, -3.99f);
		bool actual = bsp(a, b, c, p);
		std::cout.clear();

		Tester::assertFalse(actual);

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
	test10();
	test11();
	test12();
	test13();
	test14();
	test15();
	test16();
	test17();
	test18();
	test19();
	test20();
	test21();
	std::cout << std::endl << std::endl;
}
