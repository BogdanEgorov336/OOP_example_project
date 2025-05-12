#include "student.h"

//default constructor (without any arguments)
Student::Student("No name", 13, 10, true) {}

//constructor with arguments
Student::Student("", 13, 0, true) {}

//canonical constructor
Student(string name, int age, int countMark, bool alive) {

	//cout << "...canonical-constructor with arguments" << endl;
	this->name = name;
	this->age = age;
	this->alive = alive;
	this->countMark = countMark;
	marks = new int[countMark];
	for (int i = 0; i < countMark; i++) {

		*(marks + i) = 4;
	}
}

//copy-constructor
Student(const Student& student) : Student(student.name, student.age,
	student.countMark, student.alive) {

}

//destructor
~Student() {

	//cout << "destructor..." << endl;

	if (marks) {
		delete[] marks;
	}
}

string ToString() {

	return "Name: " + name
		+ "\nAge: " + to_string(age)
		+ "\nMark: " + getAllMarks()
		+ "\nAlive: " + (alive ? "yes." : "no.")
		+ "\n";
}

string getAllMarks() {

	if (countMark == 0) {
		return "[]";
	}

	string str = "";

	for (int i = 0; i < countMark; i++) {

		str += to_string(*(marks + i)) + " ";
	}

	return str;
}

int getMark(int index) {
	return index < 0 || index > countMark || !marks ? 0 : marks[index];
}

void setMark(int index, int mark) {

	if (index >= 0 && index < countMark) {

		marks[index] = mark;
	}
}