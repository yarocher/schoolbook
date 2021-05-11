#include <iostream>

using namespace std;

class SchoolbookView {
	public:
		void printSection (Section section, bool teacher) {
			cout << section.toString(teacher);
		}
		void printSectionRequest () {
			cout << "Please, enter number of section:\n";
		}
		void printRoleRequest () {
			cout << "What is your role (teacher | pupil)?:\n";
		}
		void printException (string msg, exception e) {
			cout << msg;
			cerr << e.what();
		}
};
