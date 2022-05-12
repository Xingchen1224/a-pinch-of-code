#pragma once
#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>

namespace xcutils
{
	template <class StringType>
	StringType lower_str(StringType str)
	{
		StringType ret{ str };
		std::transform(ret.begin(), ret.end(), ret.begin(), [](unsigned char c) { return std::tolower(c); });
		return ret;
	}

	template <class StringType>
	StringType upper_str(StringType str)
	{
		StringType ret{ str };
		std::transform(ret.begin(), ret.end(), ret.begin(), [](unsigned char c) { return std::toupper(c); });
		return ret;
	}
}