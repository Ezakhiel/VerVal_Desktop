#pragma once
#include <string>
#include "FileExtensionManagerFactory.h"

class Log_Analyzer
{
private:
	FileExtensionManager *logManage;
public:
	Log_Analyzer(FileExtensionManager *man);
	Log_Analyzer();
	~Log_Analyzer();
	bool IsValidLogFileName(std::string s);
	virtual FileExtensionManager* getMGR();
	bool isTheFileValid(std::string s);
};