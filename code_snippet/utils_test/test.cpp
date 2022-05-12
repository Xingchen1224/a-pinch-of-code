#include "pch.h"
#include "../utils/utils.h"

TEST(xingchen, StringTransform)
{
	const std::string xingchen{ "xingchen" };
	const std::string XINGCHEN{ "XINGCHEN" };

	EXPECT_EQ(xcutils::lower_str<std::string>("XINGCHEN"), xingchen);
	EXPECT_EQ(xcutils::lower_str<std::string>("XINGchen"), xingchen);
	EXPECT_EQ(xcutils::lower_str<std::string>("xingchen"), xingchen);

	EXPECT_EQ(xcutils::upper_str<std::string>("XINGCHEN"), XINGCHEN);
	EXPECT_EQ(xcutils::upper_str<std::string>("XINGchen"), XINGCHEN);
	EXPECT_EQ(xcutils::upper_str<std::string>("xingchen"), XINGCHEN);

#ifdef _WIN32
	const std::wstring wxingchen{ L"xingchen" };
	const std::wstring WXINGCHEN{ L"XINGCHEN" };

	EXPECT_EQ(xcutils::lower_str<std::wstring>(L"XINGCHEN"), wxingchen);
	EXPECT_EQ(xcutils::lower_str<std::wstring>(L"XINGchen"), wxingchen);
	EXPECT_EQ(xcutils::lower_str<std::wstring>(L"xingchen"), wxingchen);

	EXPECT_EQ(xcutils::upper_str<std::wstring>(L"XINGCHEN"), WXINGCHEN);
	EXPECT_EQ(xcutils::upper_str<std::wstring>(L"XINGchen"), WXINGCHEN);
	EXPECT_EQ(xcutils::upper_str<std::wstring>(L"xingchen"), WXINGCHEN);
#endif // _WIN32
}