#pragma once
#include <string>
#include "FileExtensionManager.h"

class FileExtensionManager : public FileExtensionManager
{
public:
	FileExtensionManager(){}
	~FileExtensionManager(){}

	bool isExtensionValid(std::string s);
	virtual bool setValue(std::string s);
};

class FakeFileExtensionManager : public FileExtensionManager
{
public:
	FakeFileExtensionManager(){}
	~FakeFileExtensionManager(){}

	bool isExtensionValid(std::string s)
	{
		return v;
	}
	virtual bool setValue(bool v2)
	{
		v = v2;
	}
};