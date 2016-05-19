#include "FakeFileExtensionManager.h"
#include "gtest/gtest.h"
#include <memory>
#include "../LogAnalyzer/Log_Analyzer.h"
#include "../LogAnalyzer/FileExtensionManagerFactory.h"


using std::shared_ptr;

TEST(LogAnalyzer, isTheFileValid_validFileName_returnsTrue)
{
	shared_ptr<FileExtensionManager> ffm = shared_ptr<FakeFileExtensionManager>(new FakeFileExtensionManager);
	std::dynamic_pointer_cast<FakeFileExtensionManager>(ffm)->setValue(true);
	FileExtensionManagerFactory::getFEMFactory()->setFileExtensionManager(ffm);

	Log_Analyzer la;

	std::string fileName = "valami.sla";

	ASSERT_TRUE(la.IsValidLogFileName(fileName)) << "File name for valami.sla should be valid";
}
