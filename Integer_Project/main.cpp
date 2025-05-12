#include "main.h"
#include "int.h"
#include "initializer.h"


int main() {

	Integer number;
	int n;

	cout << "Enter n: ";
	cin >> n;
	Integer number(n);

	cout << number.ToString() << endl;


	return 0;
}