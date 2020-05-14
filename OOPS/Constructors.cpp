#include <cstring>
#include <iostream>
using namespace std;
class Car {
  private:
    int price;
    char name[20];

  public:
    int model;

    Car() { cout << "Making a car" << endl; }
    // Parametrised Constructor
    Car(int price, int model, char *n) {
      this->price = price;
      this->model = model;
      strcpy(name, n);
    }

    // Copy Constructor
    // Just for explaination. It exists by default, no need to write it.
    Car(Car &x) {
      cout << "Making a copy of the car" << endl;
      strcpy(name, x.name);
      price = x.price;
      model = x.model;
    }

    void print() {
      cout << price << endl;
      cout << model << endl;
      cout << name << endl;
    }
};

int main() {

  Car C;
  char ch[] = "Audi";
  Car D(100, 2001, ch);
  // D.print();

  // Car E(D);
  // OR
  Car E = D;

  E.model = 3001;
  E.print();
  D.print();

  // NOTE!
  // string name = "kunal";
  // string second = name;
  // cout << &name << endl << &second << endl; // different locations!
  // when we equate with =, it will just copy what's inside and make a new
  // memory. To point to same memory we should use *second

  return 0;
}
