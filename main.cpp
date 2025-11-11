#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
class Person{
Person:: Person(){
}
Person::Person(string n, int d){
  name = n;
  id = d;
}
int Person:: getid(){
  return id;
}
void Person:: display(){
  cout << "Name:" << name << "ID:" << id << endl;
}
~Person(){
}
}





// ==================== Student Class Implementation ====================


Student:: Student(){
}
Student:: Student(string n, int d, int y, string m): Person(n, d){
        yearLlevel = y;
        major = m;
    }
    void Student:: display(){
        cout << "Student Info: " << endl; << "Name: " << name << endl; << "Year: " << y << endl; << "Major: " << major << endl;

}
~Student(){
}


// ==================== Instructor Class Implementation ====================

Instructor:: Instructor(string n, int i, string d, int e): Person(n,d){
department = d;
experienceYears = e;

void display(){
cout << "Department: " << department << endl << "Experience Years: " << experienceYears << "years" << endl;


// ==================== Course Class Implementation ====================
Course:: Course(){
}
Course:: Course(string c, string cn, int m, Student s, int cs){
  courseCode= c;
  courseName = cn;
  int maxStudents = m;
  students-> s;
  currentStudents = cs;
}
string Course:: getCourseName(){
return courseName;
}
void Course:: addStudent(const Student& s){
  if(currentStudent == maxStudents){
    cout << "Students reached maximum size" endl;
  return;
  }
  else
currentStudents++;
students[currentStudents] = s
}
displayCourseInfo(){
  cout << "Course: " << courseName << endl <<
  "Max Students: " << maxStudents << endl << "Currently enrolled: " << "(ID: " << Person.getid() << ")" << endl;
  currentStudents << endl;
}

~Course(){
delete [] students;
}






// ==================== Main Function ====================
int main() {
  Person p("Dr Lina", 12456);
  Person p1("Omar Nabil", 134);
  Student s("Omar Nabil", 134, 2, "Informatics");
  Course c("35CS","CS101- Itroduction to Programming", 3, "Omar Nabil");
  c.displayCourseInfo();
  Instructor i("Dr Lina Khaled", 12456, "Computer Science" , 5);
  addStudent(s);
  
  i.display();
  s.display();
  
    
    return 0;
}
