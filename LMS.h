#ifndef LMS_H
#define LMS_H
#include <iostream>
#include <string>
#include <vector>
#include "stident.h"
#include "Course.h"

using namespace std;

class LMS {
private:
    string name;
    vector<stident> students;
    vector<Course> courses;
public:
    LMS(string name) {
        this->name = name;
    }

    void addStudent(stident& student);
    void addCourse(Course& course);
    stident& getStudents(int index);
    Course& getCourses(int index);


    void addStudentToCourse( stident& student, Course& course);

    void printDetails();
};



#endif //LMS_H