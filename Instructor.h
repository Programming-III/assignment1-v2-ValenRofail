#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here


private:
string department;
int experienceYears;

public:
Instructor(string n, int i, string d, int e): Person(n,d);
display();
Instructor();
~Instructor();






#endif
