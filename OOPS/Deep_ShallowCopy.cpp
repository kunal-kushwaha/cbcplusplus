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
      name = new char[l + 1];
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
  Car C;
  C.setName("Audi");
  // C.print();

  Car D(100, 200, "BMW");
  Car E(D);
  E.name[0] = 'G'; // this will change D also (if default constructor is used)because name is a pointer pointing
                   // to the same memory in heap
                   // This is why we should avoid default copy constructor which
                   // this is called shallow copy

  E.model = 8008;  // This wont change D.
  // creates a DEEP COPY
  // A deep copy of an object is a new object with entirely new instance variables, it does not share objects with the old.

  D.print();
  E.print();

  return 0;
}
