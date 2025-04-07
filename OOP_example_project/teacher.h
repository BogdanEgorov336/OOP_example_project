#include "student.h"

class Teacher {

private: 

	const int BEST_MARK = 9;

public:

	Student GetBestStudent(Student* student_list, int size) {

		for (int i = 0; i < size; i++) {

			if (student_list[i].avg_mark >= BEST_MARK) {
				return student_list[i];
			}
		}

		Student empty{};
		return empty;
	}
};