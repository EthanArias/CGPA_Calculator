#include <iostream>
#include <vector>
#include "Course.h"

int main()
{
	std::vector<Course> cList(10);
	int size = 0;

	std::cout << "How many cources have you taken?" << std::endl;
	std::cin >> size;
	if (size < 0) {
		size *= -1;
	}

	for (int i = 0; i < size; ++i) {
		std::string courseName = "";
		int courseCredits = 0;
		std::string courseGrade = "";
		cList.push_back(Course());

		std::cout << "\tWhat is the name of the " << i+1<< "course?" << std::endl;
		std::cin >> courseName;
		std::cout << "\tWhat is the number of credits for the " << i + 1 << "course?" << std::endl;
		std::cin >> courseCredits;
		std::cout << "\tWhat is the your grade for the " << i + 1 << "course?" << std::endl;
		std::cin >> courseGrade;

		cList[cList.size()].setname(courseName);
		cList[cList.size()].setcredits(courseCredits);
		cList[cList.size()].setGrade(courseGrade);
	}
}