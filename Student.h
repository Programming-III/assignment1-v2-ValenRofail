#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here

private:
    int yearLevel;
    string major;

public:
    Student(string n, int d, int y, string m): Person(n, d);
    void display();
    Student();
~Student();







#endif
