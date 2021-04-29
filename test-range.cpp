#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "current-range.h"

TEST_CASE("Finds the Number of consecutive ranges in the given series") {
	std::vector<RangeFinder*> ListOfRangeInfo = {};
	findRanges({ 3, 3, 5, 4, 10, 11, 12 }, ListOfRangeInfo);
	REQUIRE(ListOfRangeInfo.size()==2);
}