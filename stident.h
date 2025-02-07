#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>
#include "Course.h"

using namespace std;



class stident {
  private:
    int id;
    string name;
    vector<int> enrolledCourses;
    static const int MAX_ALLOWED_CREDITS = 18;
    public:


    stident(int id, string name) {
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
