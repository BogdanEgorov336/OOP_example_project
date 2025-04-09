#include "teacher.h"

int main() {

	Student student1{};
	/*Student student2("Alex");
	Student student3("Vlad", 13, 10, true);
	Student student4(student2);*/

	Student student2{ "Alex" };
	//Student student3{ "Vlad", 13, 10, true };

	Student student3{ "Vlad", 13};
	Student student4{ student3 };

	cout << student1.ToString() << endl;
	cout << student2.ToString() << endl;
	cout << student3.ToString() << endl;
	cout << student4.ToString() << endl;

	return 0;
}