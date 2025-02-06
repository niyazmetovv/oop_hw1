#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>
#include "course.h"

using namespace std;



class Student {
  private:
    int id;
    string name;

    static const int MAX_ALLOWED_CREDITS = 18;
    public:
    vector<int> enrolledCourses;

    Student(int id, string name) {
        this->id = id;
        this->name = name;
    };

    int getId() const;
    string getName() const;
    const vector<int>& getEnrolledCourses() const;

    bool takesCourse(Course& course) ;
    bool takeCourse(Course& course) ;
    void dropCourse(Course& course) ;
    void printDetails() ;



};



#endif //STUDENT_H
