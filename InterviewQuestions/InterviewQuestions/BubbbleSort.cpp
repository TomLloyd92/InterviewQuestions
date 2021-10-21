#include "BubbbleSort.h"

BubbleSort::BubbleSort()
{
	/*
	The bubble sort method starts at the beginning of an unsorted array and 'bubbles up' unsorted values towards the end, iterating through the array until it is completely sorted.
	It does this by comparing adjacent items and swapping them if they are out of order. The method continues looping through the array until no swaps occur at which point the array is sorted.
	This method requires multiple iterations through the array and for average and worst cases has quadratic time complexity. While simple, it is usually impractical in most situations.
	*/

	srand(time(NULL));
	recusionTimes = 0;

	for(int i = 0; i < m_AMMOUNT; i++)
	{
		int randomNum = std::rand() % 100;
		m_numVec.push_back(randomNum);
	}

}

void BubbleSort::run()
{
	m_logic();
	m_output();

}

void BubbleSort::m_logic()
{
	while (sorted == false)
	{
		sorted = true;
		for (int i = 0; i < m_numVec.size(); i++)
		{
			if (i == 0)
			{
				
			}
			else {
				m_sort(m_numVec.at(i), m_numVec.at(i - 1));
			}

			if (i == m_numVec.size() - 1)
			{
				
			}
			else
			{
				m_sort(m_numVec.at(i + 1), m_numVec.at(i));
			}
		}
		recusionTimes++;
	}


}

void BubbleSort::m_sort(int& currentNumber, int& otherNumber)
{
	if (currentNumber < otherNumber)
	{
		int numHolder = otherNumber;
		otherNumber = currentNumber;
		currentNumber = numHolder;
		sorted = false;
	}
}

void BubbleSort::m_output()
{
	for (int number : m_numVec)
	{
		std::cout << number << std::endl;
	}
	std::cout << "Rec:" + std::to_string(recusionTimes) << std::endl;
}
