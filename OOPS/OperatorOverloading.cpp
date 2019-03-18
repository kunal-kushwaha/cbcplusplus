#include <iostream>
using namespace std;

class Human {
private:
  char *name;

public:
  int age;
  Human() {
    age = -1;
    name = NULL;
  }
  Human(int a, char *n) {
    age = a;
    int l = strlen(n);
    name = new char[l + 1];
    strcpy(name, n);
  }

  // + is binary operator
  void operator+(const Human &h) { age = age + h.age; }

  // unirary operator
  void operator!() { age *= -1; }
  void print() const { cout << age << endl << name << endl; }
};

void operator>>(istream &is, Human &h) {
  int a;
  is >> a;
  h.age = a;
}
// Here we are returning the reference so that we can use multiple << like cout
// << something << something;
ostream &operator<<(ostream &os, Human &h) {
  h.print();
  return os;
}

int main() {

  Human kunal(20, "Kunal");
  Human rahul(21, "Rahul");

  kunal + rahul;
  !kunal;
  kunal.print();

  Human apoorv(22, "Apoorv");
  cin >> apoorv; // cin is first argument and apoorv is second argument

  cout << apoorv << endl;

  return 0;
}
