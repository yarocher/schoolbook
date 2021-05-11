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
	string toString () {
		return question + " (correct: " + to_string(correctAnswerIndex) + ")\n\t" + answers[0] + "\n\t" + answers[1] + "\n\t" + answers[2] + "\n\t" + answers[3];
	}
};
