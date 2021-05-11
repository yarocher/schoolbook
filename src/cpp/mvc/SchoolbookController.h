#include <iostream>
#include "DAO.h"

using namespace std;

class SchoolbookController {
	public:
		void processInput () {
			string input;
			cout << "Please, enter number of section:\n";
			cin >> input;
			try {
				int number = stoi(input);
				DAO dao;
				Section section = dao.getSection(1);	
				cout << section.toString();
			}
			catch (const exception& e) {
				cout << "Something went wrong while trying to get section\n";
				cerr << e.what();
			}
		}
};
