#include <string>
#include "FileExtensionManagerFactory.h"

FileExtensionManagerFactory* FileExtensionManagerFactory::me;

FileExtensionManagerFactory::FileExtensionManagerFactory(){}

FileExtensionManager* FileExtensionManagerFactory::getFileExtensionManager(){
		return fem;
	}
void FileExtensionManagerFactory::setFileExtensionManager(FileExtensionManager *fm){
	fem = fm;
}
FileExtensionManagerFactory* FileExtensionManagerFactory::getFEMFactory(){
	if (me == NULL)
	{
		me = new FileExtensionManagerFactory();
	}
	return me;
}

