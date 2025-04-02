#include "student.h"

int main() {

	Student st1, st2;

	//1-st student init
	st1.name = "Bogdan";
	st1.age = 14;
	st1.avg_mark = 9.5;
	st1.alive = true;

	//2-nd student init
	st2.name = "Ivan";
	st2.age = 15;
	st2.avg_mark = 4.5;
	st2.alive = true;

	//string name = st1.avg_mark > st2.avg_mark
	//	? st1.name : st2.name;

	Student t = st1.avg_mark > st2.avg_mark ? st1 : st2;

	cout << t.name << endl;

	system("pause");
	return 0;
}