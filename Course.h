#pragma once
#include <string>
class Course
{
public:
	Course() {
		name = "";
		credits = 0;
		grade = 0.0;
	}
	void setname(std::string n);
	void setcredits(int c);
	void setGrade(std::string score);
private:
	std::string name;
	int credits;
	double grade;
};

inline void Course::setname(std::string n) {
	name = n;
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