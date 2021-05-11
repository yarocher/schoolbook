#include <iostream>

using namespace std;
class Test {
	private: 
	string question;
	int correctAnswerIndex;
	string answers [4];

	public:
	int getCorrectIndex () {return correctAnswerIndex;}
	string getQuestion () {return question;}
	string getAnswer (int index) {return answers[index];}
	void setCorrectIndex (int index) {correctAnswerIndex = index;}
	void setQuestion (string q) {question = q;}
	void setAnswer (int index, string a) {answers[index] = a;}
};
