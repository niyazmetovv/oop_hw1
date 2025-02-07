#include <iostream>
#include <string>
#include <vector>
#include "LMS.h"
#include "stident.h"
#include "course.h"

using namespace std;

class stident;

stident& LMS::getStudents(int index) {
    return students[index];
}
Course& LMS::getCourses(int index) {
    return courses[index];
}

void LMS::addStudent(stident& student) {
    students.push_back(student);
}

void LMS::addCourse(Course& course) {
    courses.push_back(course);
}

void LMS::addStudentToCourse( stident& student, Course& course) {
        student.takeCourse(course);
        course.addStudent(student);
}


void LMS::printDetails() {
    cout << "LMS Name: " << name << endl;
    cout << "Students: " << endl;
    for (auto& student : students) {
        student.printDetails();
    }
    cout << " Courses: " << endl;
    for (auto& course : courses) {
        course.printDetails();
    }
}

