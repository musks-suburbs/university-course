// Course.h
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>

class Student; // Forward declaration

class Course {
public:
    Course(int courseId, const std::string& name);
    void addStudent(Student* student);
    void displayCourseInfo();

private:
    int courseId;
    std::string name;
    std::vector<Student*> enrolledStudents;
};

#endif
