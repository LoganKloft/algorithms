#include "kmp.hpp"

namespace algorithm
{
    std::vector<int> lps(std::string const &str)
    {
        std::vector<int> lps_vec(str.size(), 0);

        int prefix_idx = 0;
        int suffix_idx = 1;

        while (suffix_idx < str.size())
        {
            if (str[prefix_idx] == str[suffix_idx])
            {
                prefix_idx++;
                lps_vec[suffix_idx] = prefix_idx;
                suffix_idx++;
            }
            else if (prefix_idx == 0)
            {
                suffix_idx++;
            }
            else
            {
                prefix_idx = lps_vec[prefix_idx - 1];
            }
        }

        return lps_vec;
    }

    int kmp(std::string const &haystack, std::string const &needle)
    {
        std::vector<int> lps_vec = lps(needle);

        int haystack_idx = 0;
        int needle_idx = 0;

        while (haystack_idx < haystack.size())
        {
            if (haystack[haystack_idx] == needle[needle_idx])
            {
                haystack_idx++;
                needle_idx++;
            }
            else if (needle_idx == 0)
            {
                haystack_idx++;
            }
            else
            {
                needle_idx = lps_vec[needle_idx - 1];
            }

            if (needle_idx == needle.size())
            {
                return haystack_idx - needle.size();
            }
        }

        return -1;
    }
} // namespace algorithm