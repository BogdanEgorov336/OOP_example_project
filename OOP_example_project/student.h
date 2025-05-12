#include "main.h"

//default -> private

class Student {

private:
	
	string name;
	int    age;
	int*   marks;
	int    countMark;
	bool   alive;

	string getAllMarks();

public:

	Student() : Student("No name", 13, 10, true) {}
	Student(string nm) : Student(nm, 13, 0, true) {}
	Student(string name, int age, int countMark, bool alive);
	Student(const Student& student) : Student(student.name, student.age,
		student.countMark, student.alive) {}
	~Student();
	
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