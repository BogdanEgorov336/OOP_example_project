#include "teacher.h"

void change(Student st) {

	st.name = "Vova";
	st.age = 15;
	st.avg_mark = 10;
	st.alive = false;

}

int main() {

	Student* list = nullptr;

	int size;
	cout << "How may students is there: ";
	cin >> size;

	list = new Student[size];

	cout << "Input students data:\n";
	for (int i = 0; i < size; i++) {

		cout << "STUDENT " << i + 1
			<< "\nName: ";
		cin >> list[i].name;

		cout << "Age: ";
		cin >> list[i].age;

		cout << "AVG mark: ";
		cin >> list[i].avg_mark;

		cout << "Is alive (y/n): ";
		char answer;
		cin >> answer;

		list[i].alive = islower(answer) == 'y';
	}

	Teacher teacher;

	Student result = teacher.GetBestStudent(list, size);

	string msg = result.alive ? "Best student is " + result.name : "No such ones.";

	cout << msg << endl;

	return 0;
}