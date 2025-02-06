#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include "course.h"
#include "lms.h"
using namespace std;

int main() {
    string nLMS;
    getline(cin, nLMS);
    LMS lms(nLMS);

    vector<Student> students;
    vector<Course> courses;

    int nSt;
    cin >> nSt;

    cin.ignore();

    Student* ptr;

    for (int i = 0; i < nSt; i++) {
        int id;
        string name;
        cin >> id >> name;
        Student s(id, name);
        students.push_back(s);
        lms.addStudent(s);
        ptr = &s;
    }

    Course* ptr1;

    int nc;
    cin>>nc;

    for(int i = 0; i < nc; i++){
        string name;
        int id, credit;
        cin>> id >> name >> credit;
        Course c(id, name, credit);
        courses.push_back(c);
        lms.addCourse(c);
        ptr1 = &c;
    }

    int a;
    cin >> a;
    int indexOfStudent = -1;
    int indexOfCourse = -1;
     for(int i = 0; i < a; i++) {
         int sID;
         int cID;
         cin >> sID >> cID;

         for(int j = 0; j < courses.size(); j++) {
             if(cID == courses[j].getId()) {
                 indexOfCourse = j;
                 break;
             }
         }
         if(indexOfCourse == -1) {
             cout << "Course not found" << endl;
             continue;
         }

         for(int j = 0; j < students.size(); j++) {
             if(sID == students[j].getId()) {
                 indexOfStudent = j;
                 break;
             }
         }
         if(indexOfStudent == -1) {
             continue;
         }
lms.addStudentToCourse(lms.getStudents(indexOfStudent), lms.getCourses(indexOfCourse));
     }


    lms.printDetails();



    return 0;
}
