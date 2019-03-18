#include <cstring>
#include <iostream>
using namespace std;
class Car {
private:
  int price;

public:
  char *name;
  int model;
  const int tyres;

  // This is called Initialization List : it means that before we enter the body
  // of the constructor, the memory is being created at the point and using ()
  // we do the initialisation
  Car() : name(NULL), tyres(4) {
    // tyres = 4; // Error : This is assignment not initialising
  }
  Car(int p, int mn, char *n, int t = 4) : price(p), model(mn), tyres(t) {
    int l = strlen(n);
    name = new char[l + 1];
    strcpy(name, n);
  }

  // deep copy constructor : making new array of name and putting value in it
  Car(Car &x) : tyres(x.tyres) {
    cout << "Making a copy of the car" << endl;
    // name = x.name;
    int l = strlen(x.name);
    name = new char(l + 1);
    strcpy(name, x.name);
    price = x.price;
    model = x.model;
  }

  // cannot be const
  void setName(const char *n) {
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

  // Constant Functions : Do not update data members of a class.
  // helps in debugging, if getting wrong answer you do not need to check the
  // const functions
  void print() const {
    cout << price << endl;
    cout << model << endl;
    cout << name << endl;
  }
};

int main() {
  //
  return 0;
}
