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

  // Destructor
  ~Car() {
    cout << "Destroying the Car " << name << endl;
    // Destructor will only delete static data members, so we need to write code
    // to delete dynamic data members like name in this case
    if (name != NULL) {
      delete[] name;
    }
  }
};

int main() {

  Car A(200, 400, "Audi");

  // suppose we create a dynamic object : object is built in heap
  Car *C = new Car(100, 200, "Dynamic Car");
  delete C;

  return 0;
}
