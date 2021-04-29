#include "current-range.h"
#include <iostream>
#include <algorithm>


void findRanges(std::vector<int> inputList, std::vector<RangeInfo*>& outputList)
{
	int min, max, count = 0; 
	sort(inputList.begin(), inputList.end());
	min = inputList[0];
	max = inputList[0];
	
	for (std::vector<int>::const_iterator itr = inputList.begin() ; itr != inputList.end(); ++itr)
	{
		if (*itr - max <= 1)
		{
			max = *itr;
			++count;
		}
		else
		{
			outputList.push_back(new RangeInfo{ min,max,count });
			min = *itr;
			max = *itr;
			count = 1;
		}

	}
	outputList.push_back(new RangeInfo{ min,max,count });
}