#pragma once
#include <string>
#include "../LogAnalyzer/FileExtensionManager.h"

class FakeFileExtensionManager : public FileExtensionManager
{
private:
	bool v;
public:
	FakeFileExtensionManager();
	virtual ~FakeFileExtensionManager();
	virtual bool isExtensionValid(std::string s);
	void setValue(bool s);
};
