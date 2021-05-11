#include <iostream>
#include <fstream>
#include <vector>
#include "rapidxml.hpp"
#include "Section.h"

using namespace std;
using namespace rapidxml;


class DAO {   
	public:
	Section getSection (int number)
	{
		xml_document<> doc;
		xml_node<> * root_node = NULL;

		//reading data from file
		ifstream theFile ("src/resources/section" + to_string(number)  + ".xml");
		vector<char> buffer((istreambuf_iterator<char>(theFile)), istreambuf_iterator<char>());
		buffer.push_back('\0');
	   
		//parsing XML to DOM
		doc.parse<0>(&buffer[0]);
	   
		//getting root node
		root_node = doc.first_node("section");
	   
		Section sect;

		//mapping DOM to Section
		xml_node<> * title_node = root_node->first_node("title");
		string title =  title_node ->value();
		sect.setTitle(title);

		xml_node<> * content_node = root_node->first_node("content");
		string content =  content_node ->value();
		sect.setContent(content);

		int testIndex = 0;
		for(xml_node<> * test_node = root_node->first_node("test"); test_node; test_node = test_node->next_sibling())
		{
			Test test;
			string question = test_node->first_node("question")->value();
			test.setQuestion(question);
			int answerIndex = 0;
			for(xml_node<> * answer_node = test_node->first_node("answer"); answer_node; answer_node = answer_node->next_sibling())
			{
				string answer = answer_node->value();
				test.setAnswer(answerIndex, answer);
				string correctAttr = answer_node->first_attribute("correct")->value();
				if (correctAttr == "true") test.setCorrectIndex(answerIndex);
				answerIndex++;
			}
			sect.setTest(testIndex, test);
			testIndex++;
		}

	   
		return sect;
	}
};
