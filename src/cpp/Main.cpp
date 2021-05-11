#include <iostream>
#include "DAO.h"

using namespace std;
using namespace rapidxml;


   
int main(void)
{
	DAO dao;
	Section section = dao.getSection(1);	
	cout << section.toString();
}
