#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "course.h"

using namespace std;


int Student::getId() const{
    return id;
}

string Student::getName() const {
    return name;
}

const vector<int>& Student::getEnrolledCourses() const {
    return enrolledCourses;
}


bool Student::takesCourse(Course& course) {
    for (int i = 0; i < enrolledCourses.size(); i++) {
        if(enrolledCourses[i] == course.getId()) {
            return true;
        }
    }
    return false;
}

bool Student::takeCourse(Course& course) {

    if(!takesCourse(course)) {
        if(course.getCredits() < MAX_ALLOWED_CREDITS) {
            enrolledCourses.push_back(course.getId());
            return true;
        }
    }
    return false;
}

void Student::dropCourse(Course& course) {
    for (int i = 0; i < enrolledCourses.size(); i++) {
        if(enrolledCourses[i] == course.getId()) {
            enrolledCourses.erase(enrolledCourses.begin() + i);
        }
    }
}

void Student::printDetails() {
    cout << "Student ID: " << getId() << ", Name: " << getName() << endl;
    cout << "Enrolled Courses: ";
    for (int enrolledCourse : enrolledCourses) {
        cout << enrolledCourse << " ";
    }
    cout << endl;
}
