#include <iostream>
#include "Test.h" 

using namespace std;

class Section {  
	private: 
	int number;
	string title;
	string content;
	Test tests [2];

	public:
	int getNumber () {return number;}
	string getTitle () {return title ;}
	string getContent () {return content;}
	Test getTest (int index) {return tests[index];}
	void setNumber (int n) {number = n;}
	void setTitle (string t) {title = t;}
	void setContent (string c) {content = c;}
	void setTest (int index, Test test) {tests[index] = test;}
	string toString () {
		return "===============\n" + title + "\n" + "===============\n"  + content + "\n\n" + "--------------\n" + "QUESTIONS\n" + "--------------\n"  + tests[0].toString() + "\n" + tests[1].toString();	
	}
};
