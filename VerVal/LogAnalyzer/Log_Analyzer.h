#pragma once
#include <string>
#include "FileExtensionManager.h"

class Log_Analyzer
{
private:
	FileExtensionManager *logManage;
public:
	Log_Analyzer(FileExtensionManager *man);
	Log_Analyzer();
	~Log_Analyzer();
	bool IsValidLogFileName(std::string s);
	bool isTheFileValid(std::string s);
};