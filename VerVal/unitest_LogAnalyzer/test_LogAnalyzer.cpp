#include "LogAnalyzer/Log_Analyzer.h"
#include "gtest/gtest.h"
#include <string>
using namespace std;

/*
TEST(Log_Analyzer, IsValidLogFileName_ValidFileName_ReturnsTrue){
Log_Analyzer log;
string s = "valami.slr";
ASSERT_TRUE(log.IsValidLogFileName(s));
}*/

// Parametrizalt tesztek <-- HOMEWORK

class Log_Analyzer_Test : public testing::TestWithParam<string>
{
public:

	Log_Analyzer* log;
	void SetUp()
	{
		log = new Log_Analyzer();
	}
	void TearDown()
	{
		delete log;
	}
};

INSTANTIATE_TEST_CASE_P(Default,MyStringTest,
	testing::Values("me.slr", "geek", "freek.slr"));

TEST_F(Log_Analyzer_Test, IsValidLogFileName_ValidFileName_ReturnsTrue)
{
	string s = "valami.slr";
	ASSERT_TRUE(log->IsValidLogFileName(s));
	
}

TEST_P(Log_Analyzer_Test, IsValidLogFileName_ValidFileNameLength_NoThrow)
{
	string s = "alma.slr";
	ASSERT_TRUE(log->IsValidLogFileName(GetParam()));
}