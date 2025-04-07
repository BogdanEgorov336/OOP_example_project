#include <iostream>
#include <string>
using namespace std;

//default -> private

class Student {

public:
	
	string name;
	int age;
	double avg_mark;
	bool alive;

	string getString() {

		return "Name: " + name
			+ "\nAge: " + to_string(age)
			+ "\nMark: " + to_string(avg_mark)
			+ "\nAlive: " + (alive ? "yes." : "no.")
			+ "\n";
	}

};