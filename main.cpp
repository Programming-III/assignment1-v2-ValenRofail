#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
class Person{
Person::Person(string n, int d){
  name = n;
  id = d;
}
void Person:: display(){
  cout << "Name:" << name << "ID:" << id << endl;
}

}





// ==================== Student Class Implementation ====================



Student:: Student(string n, int d, int y, string m): Person(n, d){
        yearLlevel = y;
        major = m;
    }
    void Student:: display(){
        cout << "Name: " << name << "ID: " << id << "Year level: " << y << "Major: " << major << endl;

}



// ==================== Instructor Class Implementation ====================

Instructor:: Instructor(string n, int i, string d, int e): Person(n,d){
department = d;
experienceYears = e;

void display(){
cout << "Department: " << department << "Experience Years: " << experienceYears << endl;


// ==================== Course Class Implementation ====================

Course:: Course(string c






// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
