#pragma once
#include "FileExtensionManager.h"
#include <memory>

class FileExtensionManagerFactory {
private:
	std::shared_ptr<FileExtensionManager> fem;
	static std::shared_ptr<FileExtensionManagerFactory> me;
	FileExtensionManagerFactory();
public:
	void setFileExtensionManager(std::shared_ptr<FileExtensionManager> fm);
	std::shared_ptr<FileExtensionManager> getFileExtensionManager();
	static std::shared_ptr<FileExtensionManagerFactory> getFEMFactory();
};