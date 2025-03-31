#pragma once
#include <string>
class Course
{
public:
	Course() {
		name = "";
		credits = 0;
		grade = 0.0;
		points = 0;
	}
	void setname(std::string n);
	std::string getname();
	void setcredits(int c);
	int getcredits();
	void setGrade(std::string score);
	void updateQP();
	double getQP();
private:
	std::string name;
	int credits;
	double grade;
	double points;
};

inline void Course::setname(std::string n) {
	name = n;
}

inline std::string Course::getname() {
	return name;
}

inline int Course::getcredits() {
	return credits;
}

inline void Course::setcredits(int c) {
	credits = c;
}

void Course::setGrade(std::string score) {
	if (score[0] == 'A') {
		grade = 4;
	}
	else if (score[0] == 'B') {
		grade = 3;
	}
	else if (score[0] == 'C') {
		grade = 2;
	}
	else if (score[0] == 'D') {
		grade = 1;
	}
	else {
		grade = 0;
	}

	if (score[1] == '+') {
		grade += 0.3;
	}
	else if (score[1] == '-') {
		grade -= 0.3;
	}
}

void Course::updateQP() {
	points = grade * credits;
}

double Course::getQP() {
	return points;
}