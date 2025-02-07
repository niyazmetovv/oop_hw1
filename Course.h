#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class stident;

class Course {
private:
    string id;
    string name;
    int credits;
    vector<int> students;

public:

    Course(string& courseId, string &courseName, int courseCredits) {
        this->id = courseId;
        this->name = courseName;
        this->credits = courseCredits;
    };
    string getId() const;
    string getName() const;
    int getCredits() const;

    bool hasStudent(stident& student);
    void addStudent(stident& student);
    void dropStudent(stident& student);
    void printDetails();

    const vector<int>& getEnrolledStudents() const;

};

#endif // COURSE_H