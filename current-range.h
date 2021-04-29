#pragma once
#include <vector>

using namespace std;

struct RangeFinder
{
	int min;
	int max;
	int numsInRange;
}; 


void findRanges(const std::vector<int>&, std::vector<RangeFinder*>&);


