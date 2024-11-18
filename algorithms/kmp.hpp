#ifndef ALGORITHMS_KMP
#define ALGORITHMS_KMP

#include <string>
#include <vector>

namespace algorithm
{
    /// @brief Compute Longest Prefix Suffix.
    ///
    /// Time: O(n) where n == str.size()
    /// Space: O(n) where n = str.size()
    /// @param str string to compute LPS of
    /// @return LPS of str
    std::vector<int> lps(std::string const &str);

    /// @brief Find first occurrence of needle in haystack
    /// @param haystack string to search inside of
    /// @param needle string to search for
    /// @return index in haystack of start of first occurrence of needle, -1 if no such occurrence
    int kmp(std::string const &haystack, std::string const &needle);
} // namespace algorithm

#endif