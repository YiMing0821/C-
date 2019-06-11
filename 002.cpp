#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;

class Date {
private:
	int year;
	int month;
public:
	Date();
	Date(int, int);
	void setYear(int);
	void setMonth(int);
	int getYear();
	int getMonth();
	void print();

};

Date::Date() {
	year = 1;
	month = 1;
}
Date::Date(int y, int m) {

	year = y;

	if (m >= 1 && m <= 12)
		month = m;
	else
		month = 1;
}
void Date::setYear(int y) {
	year = y;
}
void Date::setMonth(int m) {
	if (m >= 1 && m <= 12)
		month = m;
	else
		month = 1;
}

int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}

void Date::print() {
	cout << getYear() << "/" << getMonth() ;
}

class Student {
private:
	Date birthDay;
	string name;
	int score;
public:
	Student();

	Student(string ,int,int, int );
	void setName(string );
	void setScore(int sc);
	string getName();
	int getScore();
	void print();

};

Student::Student() {
		name = " ";
		score = 0;
	}

Student::Student(string na,int y,int m, int sc) {
		name = na;
		birthDay.setYear(y);
		birthDay.setMonth(m);
		score = sc;
	}
	void Student::setName(string na) {
		name = na;

	}
	void Student::setScore(int sc) {
		score = sc;

	}
	string Student::getName() {
		return name;
	}
	int Student::getScore() {

		return score;
	}
	void Student::print() {
		cout << getName() << " ";
		birthDay.print();
		cout << " " << getScore()<<endl;
	}

int main() {
	string name;
	int year,mouth,score;
	cin>>name>>year>>mouth>>score;
	Student student1(name,year,mouth,score);
	cin>>name>>year>>mouth>>score;
	Student student2(name,year,mouth,score);
	student1.print();
	student2.print();
	return 0;

}
