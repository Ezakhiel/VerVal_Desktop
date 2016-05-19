#pragma once
#include <string>
#include "Webservice.h"

class Log_Analyzer5
{
public:
	Log_Analyzer5(Webservice *w);
	~Log_Analyzer5();
	bool isTheFileValid(std::string s);
private:
	Webservice* ws;
};