#include "ArrayList.h"



void ArrayList :: add(int value) {

	if (array != nullptr) {

		int* newArray = new int[size + 1];

		for (int i = 0; i < size; i++) {

			newArray[i] = array[i];
		}

		delete[] array;

		array = newArray;
		size++;
	}

}
//O(N)

void ArrayList :: add(int index, int value) {

	if (array != nullptr) {

		int* newArray = new int[size + 1];

		for (int i = 0; i < size; i++) {

			newArray[i] = array[i];
		}

		delete[] array;

		array = newArray;
		size++;
	}

}

void ArrayList::remove() {

	if (array == nullptr || size <= 0) {

		return;
	}

	size--;

	int* newArray = new int[size];

	for (int i = 0; i < size; i++) {
		
		newArray[i] = array[i];
	}

	delete[] array;

	array = newArray;
}


int ArrayList::get(int index) {

	if (array == nullptr || index < 0 || index >= size) {
		
		return 0;
	}

	return array[index];
}
//O(1)

void ArrayList::set(int index, int value) {

	if (array == nullptr || index < 0 || index >= size) {

		return;
	}

	array[index] = value;
}
//O(1)

void ArrayList::clear() {

	if (array != nullptr) {
	
		delete[] array;

		array = nullptr;
		size = 0;
	}
}

int ArrayList::length() {

	return size;
}


bool ArrayList::isEmpty() {

	return length() == 0;
}

