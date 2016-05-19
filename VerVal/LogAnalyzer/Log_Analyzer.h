#pragma once
#include <string>
#include "Webservice.h"

class Log_Analyzer
{
public:
	Log_Analyzer();
	~Log_Analyzer();
	bool isTheFileValid(std::string s);

};