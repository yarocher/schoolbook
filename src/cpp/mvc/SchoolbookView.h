#include <iostream>

using namespace std;

class SchoolbookView {
	public:
		void printSection (Section section, bool teacher) {
			cout << section.toString(teacher);
		}
		void printSectionRequest () {
			cout << "Будь-ласка, введіть номер розділу:\n";
		}
		void printRoleRequest () {
			cout << "Яка ваша роль (teacher | pupil)?:\n";
		}
		void printException (string msg, exception e) {
			cout << msg;
			cerr << e.what();
		}
};
