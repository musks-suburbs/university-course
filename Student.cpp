// Student.cpp
#include "Student.h"
#include "Course.h"

Student::Student(int studentId, const std::string& name) : studentId(studentId), name(name) {}

void Student::enrollCourse(Course* course) {
    enrolledCourses.push_back(course);
}

void Student::displayStudentInfo() {
    std::cout << "Student ID: " << studentId << ", Name: " << name << std::endl;
    std::cout << "Enrolled Courses:" << std::endl;
    for (const auto& course : enrolledCourses) {
        std::cout << "- " << course->getCourseName() << std::endl;
    }
}
