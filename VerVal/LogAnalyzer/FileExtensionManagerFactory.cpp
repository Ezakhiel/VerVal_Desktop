#include "FileExtensionManagerFactory.h"
using std::shared_ptr;

shared_ptr<FileExtensionManagerFactory> FileExtensionManagerFactory::me = nullptr;

FileExtensionManagerFactory::FileExtensionManagerFactory(){}

shared_ptr<FileExtensionManager> FileExtensionManagerFactory::getFileExtensionManager(){
	return fem;
}
void FileExtensionManagerFactory::setFileExtensionManager(shared_ptr<FileExtensionManager> fm){
	fem = fm;
}
shared_ptr<FileExtensionManagerFactory> FileExtensionManagerFactory::getFEMFactory(){
	if (me == nullptr)
	{
		me = shared_ptr<FileExtensionManagerFactory>(new FileExtensionManagerFactory);
	}
	return me;
}

