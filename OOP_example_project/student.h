#include "main.h"

//default -> private

class Student {

public:
	
	string name;
	int age;
	double avg_mark;
	bool alive;

	//default constructor (without any arguments)
	Student() {
		
		cout << "...default-constructor" << endl;

		name = "No name";
		age = 13;
		avg_mark = 4.0;
		alive = true;
	}

	//constructor with arguments
	Student(string nm) {

		cout << "...constructor with arguments" << endl;
		name = nm;
		age = 13;
		avg_mark = 4.0;
		alive = true;
	}

	//canonical constructor
	Student(string nm, int a, double mark, bool alv) {

		cout << "...canonical-constructor with arguments" << endl;
		name = nm;
		age = a;
		avg_mark = mark;
		alive = alv;
	}

	//copy-constructor
	Student(const Student& student) {

		cout << "...copy-constructor with arguments" << endl;
		name = student.name;
		age = student.age;
		avg_mark = student.avg_mark;
		alive = student.alive;
	}

	//destructor
	~Student() {

		cout << "destructor..." << endl;

	}

	string ToString() {

		return "Name: " + name
			+ "\nAge: " + to_string(age)
			+ "\nMark: " + to_string(avg_mark)
			+ "\nAlive: " + (alive ? "yes." : "no.")
			+ "\n";
	}

};