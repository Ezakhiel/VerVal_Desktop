#pragma once
#include <string>
#include"LogAnalyzer2/Webservice.h"

class ManualMockWebservice : public Webservice
{
public:
	ManualMockWebservice();
	~ManualMockWebservice();
	virtual void logError(std::string str);
	std::string checkString;
};
