#include <iostream>
using namespace std;
class Car {
public: // by default it is private
  int price;
  int model;
  char name[20];

  void start() { cout << "Starting the car" << endl; }
};

int main() {

  Car C;
  cout << sizeof(C) << endl; // C is an actual object

  cout << sizeof(Car)
       << endl; // This does not take any memory, this does not exist in memory
  // Then why the sizeof(Car) is 28? Because sizeof() shows that this is how
  // much memory the object of Car will take if it is created.

  C.price = 500;
  C.model = 1001;
  cin.getline(C.name, 20);
  C.start();

  return 0;
}
