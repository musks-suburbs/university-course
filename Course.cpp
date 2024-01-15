// Course.cpp
#include "Course.h"
#include "Student.h"

Course::Course(int courseId, const std::string& name) : courseId(courseId), name(name) {}

void Course::addStudent(Student* student) {
    enrolledStudents.push_back(student);
    student->enrollCourse(this);
}

void Course::displayCourseInfo() {
    std::cout << "Course ID: " << courseId << ", Name: " << name << std::endl;
    std::cout << "Enrolled Students:" << std::endl;
    for (const auto& student : enrolledStudents) {
        std::cout << "- " << student->getStudentName() << std::endl;
    }
}
