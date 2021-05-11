#include <iostream>

using namespace std;

class SchoolbookView {
	public:
		void printSection (Section section) {
			cout << section.toString();
		}
		void printInputRequest () {
			cout << "Please, enter number of section:\n";
		}
		void printException (string msg, exception e) {
			cout << msg;
			cerr << e.what();
		}
};
