#include "Log_Analyzer.h"
#include <iostream>
using namespace std;

// kivetel s < 3 + teszt kivetel ellenorzesre
Log_Analyzer::Log_Analyzer(FileExtensionManager *logman)
{
	logManage = logman;
}

Log_Analyzer::Log_Analyzer()
{

}

bool Log_Analyzer::IsValidLogFileName(string s) 
{
	return logManage->isExtensionValid(s);
	/*if (s.size()< 7)
		throw;
	return !s.compare(s.length() - 3, 3, "slr");*/
}

bool Log_Analyzer::isTheFileValid(std::string s)
{
	//TO DO

	return false;
}

Log_Analyzer::~Log_Analyzer()
{
}

