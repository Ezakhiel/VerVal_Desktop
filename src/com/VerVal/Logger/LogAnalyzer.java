package com.VerVal.Logger;

public class LogAnalyzer {

	Boolean IsValidLogFileName(String s) {
		return s.matches(new String(".slr$"));
	}
}
