#include "LogAnalyzer/Log_Analyzer.h"
#include "gtest/gtest.h"
#include <string>
#include <memory>

using namespace std;
/*
/*
TEST(Log_Analyzer, IsValidLogFileName_ValidFileName_ReturnsTrue){
Log_Analyzer log;
string s = "valami.slr";
ASSERT_TRUE(log.IsValidLogFileName(s));
}*/

// Parametrizalt tesztek <-- HOMEWORK

class Log_Analyzer_Test : public testing::Test
{
public:

	std::shared_ptr<Log_Analyzer> log;
	void SetUp()
	{
		log = std::shared_ptr<Log_Analyzer>(new Log_Analyzer());
	}
	void TearDown()
	{
	}
};

TEST_F(Log_Analyzer_Test, IsValidLogFileName_ValidFileName_ReturnsTrue)
{
	string s = "valami.slr";
	ASSERT_TRUE(log->IsValidLogFileName(s));
	
}

class PLogSystemTest : public testing::TestWithParam<const char*>
{
public:
	std::shared_ptr<Log_Analyzer> log;
	virtual void SetUp(){ log = std::shared_ptr<Log_Analyzer>(new Log_Analyzer()); }
	virtual void TearDown(){}
};

TEST_P(PLogSystemTest, isTheFileValid_invalidFileName_returnFalse)
{
	ASSERT_TRUE(log->IsValidLogFileName(GetParam()));
}

INSTANTIATE_TEST_CASE_P(InstantiationName,
	PLogSystemTest,
	::testing::Values("a.sla", "b.sla", "c.sl"));