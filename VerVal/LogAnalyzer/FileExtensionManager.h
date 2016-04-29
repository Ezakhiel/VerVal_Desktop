#pragma once
#include <string>

class FileExtensionManager
{
public:
	FileExtensionManager();
	virtual ~FileExtensionManager();
	virtual bool isExtensionValid(std::string s);
	virtual bool setValue(bool s);
};

class FakeFileExtensionManager :FileExtensionManager
{
private:
	bool v;
public:
	FakeFileExtensionManager();
	virtual ~FakeFileExtensionManager();
	virtual bool isExtensionValid(std::string s);
	virtual bool setValue(bool s);
};

class RealFileExtensionManager :FileExtensionManager
{
public:
	RealFileExtensionManager();
	virtual ~RealFileExtensionManager();
	virtual bool isExtensionValid(std::string s);
	virtual bool setValue(bool s);
};