#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here

private:
string name;
int id;

public:
Person(string n, int d){
  name = n;
  id = d;
}
void display(){
  cout << "Name:" << name << "ID:" << id << endl;
}










#endif
