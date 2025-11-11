#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here

private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;

public:
Course(string c, string cn, int m, Student s, int cs);
addStudent(const Student& s);
displayCourseInfo();
getCourseName();

~Course();









#endif
