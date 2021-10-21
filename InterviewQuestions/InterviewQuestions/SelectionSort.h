#pragma once
#include <iostream>;
#include <vector>
#include <time.h>
#include <string>

class SelectionSort {
public:
	SelectionSort();
	void run();

private:
	void m_logic();

	void m_output();
	void m_numberSwap(int & t_num1, int & t_num2 );

	const int m_AMMOUNT = 10;
	int recusionTimes;

	std::vector<int> m_numVec;
	bool sorted = false;
};