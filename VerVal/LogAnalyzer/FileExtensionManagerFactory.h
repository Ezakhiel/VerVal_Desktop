#pragma once
#include <string>
#include "FileExtensionManager.h"

class FileExtensionManagerFactory {
private:
	FileExtensionManager *fem;
	static FileExtensionManagerFactory *me;
	FileExtensionManagerFactory();
public:
	void setFileExtensionManager(FileExtensionManager* fm);
	FileExtensionManager* getFileExtensionManager();
	static FileExtensionManagerFactory* getFEMFactory();
};
