#pragma once
#include <string>
using namespace std;

class Log_Analyzer
{
public:
	Log_Analyzer();
	~Log_Analyzer();
	bool IsValidLogFileName(string s);
};

