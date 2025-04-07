#include "student.h"

void change(Student st) {

	st.name = "Vova";
	st.age = 15;
	st.avg_mark = 10;
	st.alive = false;

}

int main() {

	Student* st1 = new Student;

	st1->name = "Vlad";
	st1->age = 15;
	st1->avg_mark = 9.9;
	st1->alive = true;

	Student* st2 = st1;

	cout << "Before: " << endl << st1->getString() << endl;

	st2->name = "Matvey";

	cout << "After: " << endl << st1->getString() << endl;


	return 0;
}