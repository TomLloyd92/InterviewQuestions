#pragma once
#include <iostream>;
#include <vector>
#include <time.h>
#include <string>

class BubbleSort {
public:
	BubbleSort();
	void run();

private:
	void m_logic();
	void m_sort(int &currentNumber, int &otherNumber );
	void m_output();

	const int m_AMMOUNT = 10;
	int recusionTimes;

	std::vector<int> m_numVec;
	bool sorted = false;
};