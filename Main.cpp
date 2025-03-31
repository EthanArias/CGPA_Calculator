#include <iostream>
#include <vector>
#include "Course.h"

int main()
{
	double GPA = 0.0;
	std::vector<Course> cList(10);
	int size = 0;

	std::cout << "How many cources have you taken? ";
	std::cin >> size;
	if (size < 0) {
		size *= -1;
	}

	for (int i = 0; i < size; ++i) {
		std::string courseName = "";
		int courseCredits = 0;
		std::string courseGrade = "";
		cList.push_back(Course());

		std::cout << "\tWhat is the name of the " << i+1<< " course? ";
		std::cin >> courseName;
		std::cout << "\tWhat is the number of credits for the " << i + 1 << " course? ";
		std::cin >> courseCredits;
		std::cout << "\tWhat is the your grade for the " << i + 1 << " course? ";
		std::cin >> courseGrade;
		cList[i].setname(courseName);
		cList[i].setcredits(courseCredits);
		cList[i].setGrade(courseGrade);
		cList[i].updateQP();
		std::cout << "Your quality points for course " << cList[i].getname() << " is " << cList[i].getQP() << std::endl;
	}
	

	std::cout << "Your total GPA is:";

	for (int i = 0; i < size; ++i) {
		GPA += cList[i].getQP();
	}
	int credz = 0;
	for (int i = 0; i < size; ++i) {
		credz += cList[i].getcredits();
	}
	std::cout << GPA / credz;
}