#pragma once
#include <iostream>;
#include <vector>;

class SymetricDifference {
public:
	SymetricDifference();
	void run();


private:
	void m_logic();

	static const int m_ARRAY_SIZE = 3;
	int m_ARRAY_ONE[m_ARRAY_SIZE] {1,6,3};
	int m_ARRAY_TWO[m_ARRAY_SIZE]{ 7,3,6 };
	int m_ARRAY_THREE[m_ARRAY_SIZE]{ 3,4,5 };

	std::vector<int> differenceVector;

};