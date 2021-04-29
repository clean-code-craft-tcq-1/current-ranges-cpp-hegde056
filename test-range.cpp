#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "current-range.h"

TEST_CASE("Finds the Number of consecutive ranges in the given series") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	processRangeInfo({ 3, 3, 5, 4, 10, 11, 12 }, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo.size()==2);
}

TEST_CASE("Finds the minimum when negative temperature is provided ") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	processRangeInfo({ 3, 3, 5, 7, 7, 0 , -2,-1,2 }, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo[0]->m_min == -2);
}

TEST_CASE("No ranges when No temperature readings provided ") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	findRanges({}, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo.empty() == true);
}