#include <cstring>
#include <iostream>
using namespace std;
class Car {
private:
  int price;

public:
  char *name;
  int model;

  Car() {
    price = 100;
    model = 1001;
    name = NULL;
  }
  Car(int p, int mn, char *n) {
    price = p;
    model = mn;
    int l = strlen(n);
    name = new char[l + 1];
    strcpy(name, n);
  }

  // deep copy constructor : making new array of name and putting value in it
  Car(Car &x) {
    cout << "Making a copy of the car" << endl;
    // name = x.name;
    int l = strlen(x.name);
    name = new char(l + 1);
    strcpy(name, x.name);
    price = x.price;
    model = x.model;
  }

  // Copy Assignment
  void operator=(Car &x) {
    int l = strlen(x.name);
    name = new char(l + 1);
    strcpy(name, x.name);
    price = x.price;
    model = x.model;
  }

  void setName(char *n) {
    if (name == NULL) {
      name = new char[strlen(n) + 1];
      strcpy(name, n);
    } else {
      // delete old and allocate new
      delete[] name;
      name = new char[strlen(n) + 1];
      strcpy(name, n);
    }
  }

  void print() {
    cout << price << endl;
    cout << model << endl;
    cout << name << endl;
  }
};

int main() {
  // Copy Assignment OP : =  will make two objects equal
  Car A(100, 200, "BMW");
  Car B(200, 400, "Audi");
  A = B; // this will not call copy constructor, copy constructor is only called
  // once when the object is created
  // Copy Assignment also makes a shallow copy
  A.print();
  B.print();

  return 0;
}
