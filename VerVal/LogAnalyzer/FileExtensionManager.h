#pragma once
#include <string>

class FileExtensionManager
{
public:
	FileExtensionManager();
	virtual ~FileExtensionManager();
	virtual bool isExtensionValid(std::string s)=0;
	virtual void setValue(bool s)=0;
};

class FakeFileExtensionManager : public FileExtensionManager
{
private:
	bool v;
public:
	FakeFileExtensionManager();
	virtual ~FakeFileExtensionManager();
	virtual bool isExtensionValid(std::string s);
	virtual void setValue(bool s);
};