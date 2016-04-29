#include "LogAnalyzer/TestableLogAnalyzer.h"
#include "gtest/gtest.h"
#include <string>
using namespace std;

TEST(TestableLogAnalyzer, isValidLogFileName_ValidLogFileName_ReturnsTrue)
{
	TestableLogAnalyzer *la = new TestableLogAnalyzer();
	string s = "filename.sln";
	ASSERT_TRUE(la->IsValidLogFileName(s));
}