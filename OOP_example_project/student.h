#include "main.h"

//default -> private

class Student {

public:
	
	string name;
	int age;
	int* marks;
	int countMark;
	bool alive;

	//default constructor (without any arguments)
	Student() : Student("No name", 13, 10, true) {
		
		//cout << "...default-constructor" << endl;
	}

	//constructor with arguments
	Student(string nm) : Student(nm, 13, 0, true) {

		//cout << "...constructor with arguments" << endl;
		name = nm;
		age = 13;
		alive = true;
	}

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


	
	//dinamic code
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
};