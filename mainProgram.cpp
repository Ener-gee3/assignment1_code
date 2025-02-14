#include "testing.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
// TO DO 
// add necessary include(s) for your library

using namespace std;


int main () {
	// testCase data structure is defined in testing.h
	vector<testCase> testCases;

	/* test cases are defined in the file test_cases.txt
	The file is expected to have to following formatting: 
	<Number of tests>
	<list of numbers with duplicates separated with a space> e.g. 1 2 3 3 4
	<expected list without duplicates> e.g. 1 2 3 4
	<sum> e.g. 4
	<expected pair as two integers separated with spaces> e.g 0 2
	-- REPEAT -- for as many test cases as <Number of tests>
	*/

	string testFileName = "test_cases.txt";


	/* Read test cases file */
	if (readTestCases(testFileName, testCases)){
		
		for (int i = 0; i < testCases.size(); i++){
			testCase tc = testCases[i];

			// test the first function
			vector<int> removedDups = removeDuplicates(tc.inputNumbers);
			bool func1Test = (removedDups == tc.expectedNumbers);

			// test the second function
			vector<int> removedDups = sumIndicies(tc.expectedNumbers, tc.sum);
			bool func2Test = (resPair == tc.expectedPair)

			// Diplay results
			cout << "-------------- Testcase " << i+1 << endl;
			cout << "removeDuplicates " << (func1Test ? "PASSED" : "* FAILED *") << endl;
			cout << "sumIndicies      " << (func2Test ? "PASSED" : "* FAILED *") << endl;
		}

	}else{
		cout << "Your testing file was not found!" << endl ;
	}
	return 0;
}