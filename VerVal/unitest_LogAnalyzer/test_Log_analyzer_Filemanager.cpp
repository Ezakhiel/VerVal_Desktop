#include "LogAnalyzer/Log_Analyzer.h"
#include "Loganalyzer/FileExtensionManager.h"
#include "gtest/gtest.h"
#include <string>
using namespace std;

TEST(LogAnalyzer, isValidLogFileName_ValidLogFileName_ReturnsTrue)
{
	FakeFileExtensionManager *fem = new FakeFileExtensionManager();
	fem->setValue(true);
	Log_Analyzer *la = new Log_Analyzer(fem);
	string s = "filename.sln";
	ASSERT_TRUE(la->IsValidLogFileName(s));
}