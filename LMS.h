#ifndef LMS_H
#define LMS_H
#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include "course.h"

using namespace std;

class LMS {
private:
    string name;
    vector<Student> students;
    vector<Course> courses;
    public:
    LMS(string name) {
        this->name = name;
    }

    void addStudent(Student& student);
    void addCourse(Course& course);
    Student& getStudents(int index);
    Course& getCourses(int index);


    void addStudentToCourse( Student& student, Course& course);

    void printDetails();
};



#endif //LMS_H
