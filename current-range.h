#pragma once
#include <vector>

using namespace std;

struct RangeInfo
{
	int m_min;
	int m_max;
	int m_numsInRange;
}; 


void findRanges(std::vector<int>, std::vector<RangeInfo*>&);


