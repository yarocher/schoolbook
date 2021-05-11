#include <iostream>
#include "DAO.h"
#include "SchoolbookView.h"

using namespace std;

class SchoolbookController {
	SchoolbookView view;
	public:
		void processInput () {
			string role;
			string author;
			string sectionNumber;
			view.printRoleRequest();
			cin >> role;
			view.printAuthorRequest();
			cin >> author;
			view.printSectionRequest();
			cin >> sectionNumber;
			try {
				int number = stoi(sectionNumber);
				DAO dao;
				Section section = dao.getSection(author, number);	
				if (role == "teacher") view.printSection(section, true);
				else if (role == "pupil") view.printSection(section, false);
				else cout << ("Invalid role");
			}
			catch (const exception& e) {
				view.printException("Something went wrong while trying to get section\n", e);
			}
		}
};
