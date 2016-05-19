#pragma once
#include <string>

class FileExtensionManager
{
public:
	FileExtensionManager();
	virtual ~FileExtensionManager();
	virtual bool isExtensionValid(std::string s) = 0;
};
