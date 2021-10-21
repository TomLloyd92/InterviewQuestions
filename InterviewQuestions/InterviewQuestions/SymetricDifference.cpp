#include "SymetricDifference.h"

SymetricDifference::SymetricDifference()
{
	/*
	Create a function that takes two or more arrays and returns an array of their symmetric difference.
	The returned array must contain only unique values (no duplicates).
	*/
}

void SymetricDifference::run()
{
	m_logic();
}

void SymetricDifference::m_logic()
{
	for (int i = 0; i < m_ARRAY_SIZE; i++)
	{
		for (int j = 0; j < m_ARRAY_SIZE; j++)
		{
			if (m_ARRAY_ONE[i] == m_ARRAY_TWO[j])
			{
				differenceVector.push_back(m_ARRAY_ONE[i]);
			}
		}
	}

	while (differenceVector.size() > 0)
	{
		std::cout << differenceVector.back() << std::endl;
		differenceVector.pop_back();
	}

}
