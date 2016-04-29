#include "LogAnalyzer/Log_Analyzer.h"
#include "Loganalyzer/FileExtensionManagerFactory.h"

#include "gtest/gtest.h"
#include <string>
using namespace std;

TEST(LogAnalyzer, isValidLogFileName_FileExtensionManagerFactory)
{
	FileExtensionManagerFactory* factory = FileExtensionManagerFactory::getFEMFactory();
	FileExtensionManager *fem = new FakeFileExtensionManager();
	fem->setValue(true);
	factory->setFileExtensionManager(fem);
	Log_Analyzer *la = new Log_Analyzer();
	string s = "filename.sln";
	ASSERT_TRUE(la->IsValidLogFileName(s));
}