#pragma once
#include <string>

class Webservice
{
public:
	Webservice(){};
	virtual ~Webservice(){};
	virtual void logError(std::string str)=0;
};
