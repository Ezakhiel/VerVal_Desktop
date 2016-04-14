#include "Log_Analyzer.h"
#include <iostream>
using namespace std;

// kivetel s < 3 + teszt kivetel ellenorzesre
Log_Analyzer::Log_Analyzer()
{
}

bool Log_Analyzer::IsValidLogFileName(string s) {
	if (s.size()< 7)
		throw;
	return !s.compare(s.length() - 3, 3, "slr");
}

Log_Analyzer::~Log_Analyzer()
{
}

