#include <iostream>
#include <string>
#include <vector>
#include "stident.h"
#include "course.h"
#include "lms.h"
using namespace std;

int main() {
    string nameLMS;
    getline(cin, nameLMS);
    LMS myLMS(nLMS);

    vector<stident> students;
    vector<Course> courses;

    int number_student;
    cin >> number_student;

    cin.ignore();


    for (int i = 0; i < number_student; i++) {
        int id;
        string name;
        cin >> id >> name;
        stident s1(id, name);
        students.push_back(s1);
        myLMS.addStudent(s1);
    }


    int number_courses;
    cin >> number_courses;

    for(int i = 0; i < number_courses; i++){
        string name, id;
        int credit;
        cin>> id >> name >> credit;
        Course c1(id, name, credit);
        courses.push_back(c1);
        lms.addCourse(c1);
    }

    int n;
    cin >> n;
    int indexOfStudent = -1;
    int indexOfCourse = -1;
     for(int i = 0; i < n; i++) {
         int student_id;
         string course_id;
         cin >> sID >> cID;

         for(int j = 0; j < courses.size(); j++) {
             if(course_id == courses[j].getId()) {
                 indexOfCourse = j;
                 break;
             }
         }
         if(indexOfCourse == -1) {
             cout << "Course not found" << endl;
             continue;
         }

         for(int j = 0; j < students.size(); j++) {
             if(student_id == students[j].getId()) {
                 indexOfStudent = j;
                 break;
             }
         }
         if(indexOfStudent == -1) {
             continue;
         }
     myLMS.addStudentToCourse(myLMS.getStudents(indexOfStudent), myLMS.getCourses(indexOfCourse));
     }


    lms.printDetails();



    return 0;
}
