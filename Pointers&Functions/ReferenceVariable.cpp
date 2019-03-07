#include <iostream>
using namespace std;
// you should not return address of a local variable
int *createX() {
  int x = 10;
  cout << &x << endl;
  return &x; // for gcc >= 5.0, returning a local variabl'es address will return
             // 0 because this variable will not exixt in memory after the
             // function call is over
}
int main() {
  int x = 10;
  int &y = x; // cannot reassign
  // &y = 32;   // error : cannot reassign

  // int &z;   // must be initialised : if not then compiler error
  y = y + 1;
  cout << x << endl; // 11
  cout << y << endl; // 11

  int *xptr = creatX();
  cout << xptr << endl;

  return 0;
}
