#include "Log_Analyzer.h"
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

class Log_Analyzer_Test : public ::testing::Test
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

TEST_F(Log_Analyzer_Test, IsValidLogFileName_ValidFileName_ReturnsTrue)
{
        string s = "valami.slr";
        ASSERT_TRUE(log->IsValidLogFileName(s));

}
