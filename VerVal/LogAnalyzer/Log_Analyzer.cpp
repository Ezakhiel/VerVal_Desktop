#include "Log_Analyzer.h"
#include <iostream>
using namespace std;

Log_Analyzer::Log_Analyzer()
{
	logManage = FileExtensionManagerFactory::getFEMFactory()->getFileExtensionManager();
}

bool Log_Analyzer::IsValidLogFileName(string s) 
{
	return logManage->isExtensionValid(s);
}

bool Log_Analyzer::isTheFileValid(std::string s)
{
	return false;
}

Log_Analyzer::~Log_Analyzer()
{
}

