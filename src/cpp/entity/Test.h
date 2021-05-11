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
	string toString (bool teacher) {
		string str = question; 
		if (teacher) str = str + " (correct: " + to_string(correctAnswerIndex + 1) + ")";
		str = str + "\n\t1) " + answers[0] + "\n\t2) " + answers[1] + "\n\t3) " + answers[2] + "\n\t4) " + answers[3];
		return str;	
	}
};
