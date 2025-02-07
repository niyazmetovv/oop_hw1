#include <iostream>
#include <string>
#include <vector>
#include "Course.h"
#include "stident.h"

using namespace std;


string Course::getId() const{
    return id;
}

string Course::getName() const {
    return name;
}

int Course::getCredits() const {
    return credits;
}


bool Course::hasStudent(stident& student) {
    for (int i = 0; i < students.size(); i++) {
        if(students[i] == student.getId()) {
            return true;
        }
    }
    return false;
}

void Course::addStudent(stident& student) {
        students.push_back(student.getId());

}

void Course::dropStudent(stident& student) {
    for (int i = 0; i < students.size(); i++) {
        if(students[i] == student.getId()) {
            students.erase(students.begin() + i);
        }
    }
}

void Course::printDetails() {
    cout << "Course ID: " << getId() << ", Name: " << getName() << ", Credits: " << getCredits() << endl;
    cout << "Enrolled Students: ";
    for (int student : students) {
        cout << student;

    }
    cout << endl;
    }

const vector<int> &Course::getEnrolledStudents() const {
    return students;
}






