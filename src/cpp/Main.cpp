#include <iostream>
#include "Section.h"
#include "DAO.h"
#include "SchoolbookView.h"
#include "SchoolbookController.h"

using namespace std;

int main () {
	Section sect;

	sect.setNumber(1);
	sect.setHeader("header");
	sect.setContent("content");

	cout << "neirugh3qiubrgneun";
	cout << sect.getNumber() << "\n";
	cout << sect.getHeader() << "\n";
	cout << sect.getContent();
	return 0;
}
