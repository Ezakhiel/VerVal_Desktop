#include "ManualMockWebservice.h"


ManualMockWebservice::ManualMockWebservice(){

}

ManualMockWebservice::~ManualMockWebservice(){

}

void ManualMockWebservice::logError(std::string str){
	checkString = str;
}