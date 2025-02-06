#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student;

class Course {
private:
    int id;
    string name;
    int credits;
    vector<int> students;

public:

    Course(int courseId, string &courseName, int courseCredits) {
        this->id = courseId;
        this->name = courseName;
        this->credits = courseCredits;
    };
    int getId() const;
    string getName() const;
    int getCredits() const;

    bool hasStudent(Student& student);
    void addStudent(Student& student);
    void dropStudent(Student& student);
    void printDetails();

    const vector<int>& getEnrolledStudents() const;

};

#endif // COURSE_H