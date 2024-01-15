// UniversityApp.cpp
#include "Student.h"
#include "Course.h"
#include <iostream>

int main() {
    Student student1(1, "John Doe");
    Student student2(2, "Jane Smith");

    Course course1(101, "C++ Programming");
    Course course2(102, "Data Structures");

    course1.addStudent(&student1);
    course1.addStudent(&student2);

    course2.addStudent(&student1);

    std::cout << "Student Information:" << std::endl;
    student1.displayStudentInfo();
    std::cout << std::endl;
    student2.displayStudentInfo();

    std::cout << "\n\nCourse Information:" << std::endl;
    course1.displayCourseInfo();
    std::cout << std::endl;
    course2.displayCourseInfo();

    return 0;
}
