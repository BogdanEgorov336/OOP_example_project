#include "initializer.h"

int main() {

	int count;
	cout << "Enter amount of students: ";
	cin >> count;

	Student* list = nullptr;

	Initializer initializer;

	initializer.init(list, count);
	 
	for (int i = 0; i < count; i++) {
	
		cout << list[i].ToString() << endl;
	}

	return 0;
}