#include <iostream>
#include "Test.h" 

using namespace std;

class Section {  
	private: 
	int number;
	string header;
	string content;
	Test tests [2];

	public:
	int getNumber () {return number;}
	string getHeader () {return header;}
	string getContent () {return content;}
	Test getTest (int index) {return tests[index];}
	void setNumber (int n) {number = n;}
	void setHeader (string h) {header = h;}
	void setContent (string c) {content = c;}
	void setTest (int index, Test test) {tests[index] = test;}
};
