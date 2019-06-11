#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

class Date {
private:
	int year;
	int month;
public:
	Date();
	Date(int , int );
	void setYear(int );
	void setMonth(int );
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
		cout << getYear() << "/" << getMonth() << endl;
	}

int main() {
	int year,mouth;
	cin>>year>>mouth;
	Date date1(year,mouth);
	cin>>year>>mouth;
	Date date2(year,mouth);
	date1.print();
	date2.print();
	return 0;
}
