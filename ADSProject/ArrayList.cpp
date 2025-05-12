#include "ArrayList.h"

void ArrayList :: add(int value) {

	int* list = new int[size + 1];

	for (int i = 0; i < size; i++) {

		list[i] = array[i];
	}

	list[size - 1] = value;
	
	delete[] array;
}

void ArrayList :: add(int index, int value) {

	if (index >= 0 && index < size && array != nullptr) {
		
		
	}

	int* list = new int[size + 1];

	for (int i = 0; i < size + 1; i++) {

		if (i = index) {

			list[i] = value;
		}

		list[i] = array[i];
	}

	delete[] array;
}

int ArrayList :: size() {

	return size;
}

int ArrayList::get(int index) {

	if (array == ptr)


	return array[index];
}

void ArrayList::set(int index, int value) {

	array[index] = value;
}

void ArrayList::clear() {

	size = 0;
}

bool ArrayList::isEmpty() {

	return size() == 0;
}

