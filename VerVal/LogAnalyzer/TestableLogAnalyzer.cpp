#include "TestableLogAnalyzer.h"
#include <iostream>
using namespace std;

FileExtensionManager* TestableLogAnalyzer::getMGR(){
	return 0;
}

bool TestableLogAnalyzer::IsValidLogFileName(string s){
	return getMGR()->isExtensionValid(s);
}