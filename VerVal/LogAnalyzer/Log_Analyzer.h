#pragma once
#include <string>

class Log_Analyzer
{
public:
	Log_Analyzer();
	~Log_Analyzer();
	bool IsValidLogFileName(std::string s);
};