#ifndef TESTER_HPP
#define TESTER_HPP

#include <iostream>

class Tester
{
private:
	enum Color { WHITE = 0, BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN };
	static unsigned int num;
	static unsigned int subNum;
	static const Color colorError = RED;
	static const Color colorSuccess = GREEN;
	static const Color colorTest = YELLOW;
	static const Color colorDiffField = BLUE;
	static const Color colorDiff = MAGENTA;

public:
	static void startTest(const char *testName = NULL);
	static void assertTrue(const bool& condition);
	static void assertFalse(const bool& condition);

	template<typename T>
	static void assertExpectedEqualsActual(const T& expected, const T& actual)
	{
		assertExpectedEqualsActual(expected, actual, true);
	}

	template<typename T>
	static void assertExpectedNotEqualsActual(const T& expected, const T& actual)
	{
		assertExpectedEqualsActual(expected, actual, false);
	}

	template<typename T>
	static void assertNull(const T* ptr)
	{
		assertExpectedEqualsActual((const T *)NULL, ptr);
	}

	template<typename T>
	static void assertNotNull(const T* ptr)
	{
		assertExpectedNotEqualsActual((const T *)NULL, ptr);
	}

private:
	Tester();

	static void setColorText(const Color color);
	static void resetColorText();
	static void printSuccess();

	template<typename T>
	static void assertExpectedEqualsActual(const T& expected, const T& actual, const bool& mustEquals)
	{
		const bool areEquals = (expected == actual);
		if (mustEquals == areEquals)
			printSuccess();
		else
			printError(expected, actual, mustEquals);
		++subNum;
	}

	template<typename T>
	static void printError(const T& expected, const T& actual, const bool& mustEquals)
	{
		setColorText(colorError);
		std::cerr << subNum << ".KO" << std::endl;
		setColorText(colorDiffField);
		std::cerr << "  Expected: ";
		setColorText(colorDiff);
		std::cerr << (mustEquals ? "" : "not ") << expected << std::endl;
		setColorText(colorDiffField);
		std::cerr << "  Actual: ";
		setColorText(colorDiff);
		std::cerr << actual << std::endl;
		resetColorText();
	}
};

#endif