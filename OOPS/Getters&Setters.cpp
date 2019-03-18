#include <iostream>
#include <vector>
using namespace std;
class Car {
private:
  // Note : these will occupy different memory for different objects
  int price;
  int model;
  char name[20];

public:
  // the member functions will aquire the same memory
  void start() { cout << "Starting the car" << endl; }
  // setter
  void setPrice(int p) { price = p; }

  // getter
  int getPrice() { return price; }
};

struct subject {
  string name;
  int marks;
  int credits;
};

int main() {
  vector<Car> sub;

  Car C;

  C.start();
  C.setPrice(600);
  cout << C.getPrice() << endl;

  cout << sizeof(C) << endl;
  cout << sizeof(Car) << endl; // wont take space of function because functions
                               // of classes have fixed memory

  return 0;
}
