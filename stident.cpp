#include <iostream>
#include <string>
#include <vector>
#include "stident.h"
#include "Course.h"

using namespace std;


int stident::getId() const{
    return id;
}

string stident::getName() const {
    return name;
}

const vector<int>& stident::getEnrolledCourses() const {
    return enrolledCourses;
}


bool stident::takesCourse(Course& course) {
    for (int i = 0; i < enrolledCourses.size(); i++) {
        if(enrolledCourses[i] == stoi(course.getId())) {
            return true;
        }
    }
    return false;
}

bool stident::takeCourse(Course& course) {

    if(!takesCourse(course)) {
        if(course.getCredits() < MAX_ALLOWED_CREDITS) {
            enrolledCourses.push_back(stoi(course.getId()));
            return true;
        }
    }
    return false;
}

void stident::dropCourse(Course& course) {
    for (int i = 0; i < enrolledCourses.size(); i++) {
        if(enrolledCourses[i] == stoi(course.getId())) {
            enrolledCourses.erase(enrolledCourses.begin() + i);
        }
    }
}

void stident::printDetails() {
    cout << "Student ID: " << getId() << ", Name: " << getName() << endl;
    cout << "Enrolled Courses: ";
    for (int enrolledCourse : enrolledCourses) {
        cout << enrolledCourse << " ";
    }
    cout << endl;
}
