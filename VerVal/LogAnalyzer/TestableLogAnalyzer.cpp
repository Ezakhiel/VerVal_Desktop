#include "TestableLogAnalyzer.h"
#include <iostream>
using namespace std;

FileExtensionManager* TestableLogAnalyzer::getMGR(){
	return new FakeFileExtensionManager();
}

bool TestableLogAnalyzer::IsValidLogFileName(string s){
	return getMGR()->isExtensionValid(s);
}