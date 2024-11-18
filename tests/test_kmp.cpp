#include <catch2/catch_test_macros.hpp>

#include <string>

#include "../algorithms/kmp.hpp"

TEST_CASE("example test case")
{
    std::string needle = "test";
    std::string haystack = "this test is simple!";

    int position = algorithm::kmp(haystack, needle);
    REQUIRE(position == 5);
}