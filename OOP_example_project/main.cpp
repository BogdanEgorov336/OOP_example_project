#include "student.h"

void change(Student st) {

	st.name = "Vova";
	st.age = 15;
	st.avg_mark = 10;
	st.alive = false;
}

int main() {

	Student st1, temp;

	//1-st student init
	st1.name = "Bogdan";
	st1.age = 14;
	st1.avg_mark = 9.5;
	st1.alive = true;

	temp = st1;

	cout << "Before\n: " << st1.getString() << endl;
	cout << temp.getString();

	st1.name = "Vova";

	cout << "After: " << st1.getString() << endl;
	cout << temp.getString();


	//cout << st2.getString();

	//string name = st1.avg_mark > st2.avg_mark
	//	? st1.name : st2.name;

	//Student t = st1.avg_mark > st2.avg_mark ? st1 : st2;
	//cout << t.name << endl;

	system("pause");
	return 0;
}