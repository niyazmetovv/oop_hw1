#include <iostream>
#include <string>
#include <vector>
#include "Course.h"
#include "stident.h"

using namespace std;


string Course::getId(){
    return id;
}

string Course::getName()  {
    return name;
}

int Course::getCredits() {
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
        cout << student << " ";
    }
    cout << endl;
}

vector<int> &Course::getEnrolledStudents()  {
    return students;
}