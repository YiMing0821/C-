#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;

class Student {
private:

	string name;
	int score;
public:
	Student();

	Student(string , int );
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

Student::Student(string na, int sc) {
		name = na;
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
		cout << getName() << " " << getScore()<<endl;
	
	}

double average(Student stuArray[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		
		sum = sum + stuArray[i].getScore();

	}
	return sum*1.0 / size;
}

int main() {
	string name[3];
	int score[3];
	for(int i=0;i<3;i++){
		cin>>name[i]>>score[i];
	}
	Student stuArray[3] = { Student(name[0],score[0]),  Student(name[1],score[1]) , Student(name[2],score[2]) };
	int size = 3;
	for (int i = 0; i < size; i++) {
		stuArray[i].print();
	}
	cout << fixed << setprecision(2) << "Average: " << average(stuArray, size);

	return 0;

}
