#pragma once
#include <string>
#include "Log_Analyzer.h"

class TestableLogAnalyzer :public Log_Analyzer
{
public:
	FileExtensionManager* getMGR();
	bool IsValidLogFileName(std::string s);
};