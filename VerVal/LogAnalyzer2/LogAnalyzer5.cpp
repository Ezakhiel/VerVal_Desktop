#include "LogAnalyzer5.h"
#include <iostream>
using namespace std;

Log_Analyzer5::Log_Analyzer5(Webservice* w)
{
	ws = w;
}

bool Log_Analyzer5::isTheFileValid(std::string s)
{
	if (s.size() < 5)
	{
		ws->logError("Tul rovid filename: " + s);
	}
	return true;
}

Log_Analyzer5::~Log_Analyzer5()
{
}
