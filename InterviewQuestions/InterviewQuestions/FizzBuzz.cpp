#include "FizzBuzz.h"

void FizzBuzz::m_logic()
{
	const int START_NUMBER = 1;
	const int END_NUMBER = 100;

	for (int i = START_NUMBER; i <= END_NUMBER; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		if (i % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (i % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		else
		{
			std::cout << i << std::endl;

		}
	}

}

FizzBuzz::FizzBuzz()
{
	/*
	Write a program that prints the numbers from 1 to 100.
	But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”.
	For numbers which are multiples of both three and five print “FizzBuzz”
	*/

}

void FizzBuzz::run()
{
	std::cout << "Running FizzBuzz" << std::endl;
	m_logic();
}
