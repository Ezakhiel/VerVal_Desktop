#include "ManualMockWebservice.h"
#include <string>
#include "gtest/gtest.h"
#include "LogAnalyzer2/LogAnalyzer5.h"

TEST(Log_Analyzer5, isFileValid_fileNameTooShort_callingWebService)
{
	ManualMockWebservice* mmws = new ManualMockWebservice();
	Log_Analyzer5 la(mmws);
	std::string s = "ezvalid";
	la.isTheFileValid(s);
	ASSERT_EQ(mmws->checkString,"Tul rovid filename: " + s);
}


