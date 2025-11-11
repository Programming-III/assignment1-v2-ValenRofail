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
    Student(string n, int d, int y, string m): Person(n, d){
        yearLlevel = y;
        major = m;
    }
    void display(){
        cout << "Name: " << name << "ID: " << id << "Year level: " << y << "Major: " << major << endl;

}








#endif
