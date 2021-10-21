#include "SelectionSort.h"

SelectionSort::SelectionSort()
{
	/*
	Selection sort works by selecting the minimum value in a list and swapping it with the first value in the list.
	It then starts at the second position, selects the smallest value in the remaining list, and swaps it with the second element.
	It continues iterating through the list and swapping elements until it reaches the end of the list. 
	*/

	srand(time(NULL));
	recusionTimes = 0;

	for (int i = 0; i < m_AMMOUNT; i++)
	{
		int randomNum = std::rand() % 100;
		m_numVec.push_back(randomNum);
	}
}

void SelectionSort::run()
{
	m_logic();
	m_output();

}

void SelectionSort::m_logic()
{
	while (sorted == false)
	{
		for (int i = 0; i < m_numVec.size(); i++)
		{
			int smallestNumber = m_numVec.at(i);
			int numLocation = i;

			for (int j = i; j < m_numVec.size(); j++)
			{
				if (m_numVec.at(j) < smallestNumber)
				{
					smallestNumber = m_numVec.at(j);
					numLocation = j;
				}
			}

			//std::cout <<"NUM LOCATION:" + std::to_string(numLocation) << std::endl;
			m_numberSwap(m_numVec.at(i), m_numVec.at(numLocation));
		}
		sorted = true;

	}
}



void SelectionSort::m_output()
{
	for (int number : m_numVec)
	{
		std::cout << number << std::endl;
	}
	std::cout << "Rec:" + std::to_string(recusionTimes) << std::endl;
}

void SelectionSort::m_numberSwap(int& t_num1, int& t_num2)
{
	int numHolder = t_num1;
	t_num1 = t_num2;
	t_num2 = numHolder;


}
