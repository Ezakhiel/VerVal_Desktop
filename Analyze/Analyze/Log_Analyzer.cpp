#include "Log_Analyzer.h"
#include <regex>
Log_Analyzer::Log_Analyzer()
{
}

bool Log_Analyzer::IsValidLogFileName(string s) {
	regex e(".slr$");

	return regex_match(s,e);
}

Log_Analyzer::~Log_Analyzer()
{
}
