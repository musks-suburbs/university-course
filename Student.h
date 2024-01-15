// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>

class Course; // Forward declaration

class Student {
public:
    Student(int studentId, const std::string& name);
    void enrollCourse(Course* course);
    void displayStudentInfo();

private:
    int studentId;
    std::string name;
    std::vector<Course*> enrolledCourses;
};

#endif
