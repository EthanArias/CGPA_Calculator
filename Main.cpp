#include <iostream>
#include <vector>
#include <utility>
#include "Course.h"

int getSize();
void initCourseList(std::vector<Course>& v);
double GPACalculator(std::vector<Course> v);

int main()
{
	std::vector<Course> cList(getSize());
	initCourseList(cList);

	std::cout << "Your total GPA is:" << GPACalculator(cList);
}

int getSize() {
	int size;
	std::cout << "How many cources have you taken? ";
	std::cin >> size;
	if (size < 0) {
		size *= -1;
	}
	return size;
}

void initCourseList(std::vector<Course>& v) {
	for (int i = 0; i < v.size(); ++i) {
		//Course parameter fillin data
		std::string courseName = "";
		int courseCredits = 0;
		std::string courseGrade = "";

		//Ask for Course data
		std::cout << "\tWhat is the name of the " << i + 1 << " course? ";
		std::cin >> courseName;
		std::cout << "\tWhat is the number of credits for the " << i + 1 << " course? ";
		std::cin >> courseCredits;
		std::cout << "\tWhat is the your grade for the " << i + 1 << " course? ";
		std::cin >> courseGrade;

		//Updates parameter data of course with given input
		v[i].setname(courseName);
		v[i].setcredits(courseCredits);
		v[i].setGrade(courseGrade);
		v[i].updateQP();

		//gives Course GPA
		std::cout << "Your quality points for your " << v[i].getname() << " course is " << v[i].getQP()/v[i].getcredits() << std::endl;
	}
}

double GPACalculator(std::vector<Course> v) {
	std::pair<double, int> result;
	for (int i = 0; i < v.size(); ++i) {
		result.first += v[i].getQP();
	}
	for (int i = 0; i < v.size(); ++i) {
		result.second += v[i].getcredits();
	}
	return result.first / result.second;
}