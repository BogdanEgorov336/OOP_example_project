#include "Queue.h"
using namespace std;

int main() {

	Queue queue;

	cout << "Enter elements (\"0\" for exit): ";
	int element;

	do {
		cin >> element;
		if (element != 0) {
			queue.enqueue(element);
		}
	} while (element != 0);

	cout << "Queue: ";
	
	while (!queue.isEmpty()) {

		cout << queue.dequeue() << " ";
	}

	system("pause");
	return 0;
}