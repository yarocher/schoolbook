#include <iostream>
#include "DAO.h"
#include "SchoolbookView.h"

using namespace std;

class SchoolbookController {
	SchoolbookView view;
	public:
		void processInput () {
			string input;
			view.printInputRequest();
			cin >> input;
			try {
				int number = stoi(input);
				DAO dao;
				Section section = dao.getSection(1);	
				view.printSection(section);
			}
			catch (const exception& e) {
				view.printException("Something went wrong while trying to get section\n", e);
			}
		}
};
