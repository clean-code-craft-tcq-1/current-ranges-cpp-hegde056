#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "current-range.h"
#include <cmath>

TEST_CASE("Finds the Number of consecutive ranges in the given series") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	processRangeInfo({ 3, 3, 5, 4, 10, 11, 12 }, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo.size()==2);
}

TEST_CASE("Finds the maximum number in the found ranges in the given series") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	processRangeInfo({ 3, 3, 5, 4, 10, 11, 12 }, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo[0]->m_max == 5);
	REQUIRE(ListOfRangesInfo[1]->m_max == 12);
}

TEST_CASE("Finds the minimum number in the found series in the given series") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	findRanges({ 3, 3, 5, 4, 10, 11, 12 }, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo[0]->m_min == 3);
	REQUIRE(ListOfRangesInfo[1]->m_min == 10);
}

TEST_CASE("Finds the total count of numbers in each found range in the given series") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	findRanges({ 3, 3, 5, 4, 10, 11, 12 }, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo[0]->m_numsInRange == 4);
	REQUIRE(ListOfRangesInfo[1]->m_numsInRange == 3);
}

TEST_CASE("Finds the minimum when negative temperature is provided ") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	findRanges({ 3, 5, 6, 7, 0 , -2,-1,2,8 }, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo[0]->m_min == -2);
}

TEST_CASE("Finds No ranges when No temperature readings provided ") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	findRanges({}, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo.empty() == true);
}

TEST_CASE("Finds single range when same temperature readings provided ") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	findRanges({0,0,0,0,0,0}, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo.size() == 1);
}

TEST_CASE("Finds single range when single temperature readings provided ") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	findRanges({ 9 }, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo.size() == 1);
	REQUIRE(ListOfRangesInfo[0]->m_min == 9);
	REQUIRE(ListOfRangesInfo[0]->m_max == 9);
	REQUIRE(ListOfRangesInfo[0]->m_numsInRange == 1);
}

TEST_CASE("Invalid input Character O input inplace of O temperature reading ") {
	std::vector<RangeInfo*> ListOfRangesInfo = {};
	findRanges({'O'}, ListOfRangesInfo);
	REQUIRE(ListOfRangesInfo.size() == 0);
}