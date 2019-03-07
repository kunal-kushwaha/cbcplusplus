#include <iostream>
using namespace std;
int main() {

  // * can be used to dereference any address
  // dereference : access the variable

  int a = 10;

  cout << *(&a) << endl; // 10

  int *ptr = &a;

  cout << *ptr + 1 << endl;   // 11
  cout << *(ptr + 1) << endl; // garbage
  // suppose ptr is 2054, then ptr + 1 will give 2058
  // because ptr is spread through 4 bytes

  cout << *(&ptr) << endl; // gives address of a
  cout << ptr << endl;     // gives address of a
  cout << &(*ptr) << endl; // gives address of a

  cout << &ptr << endl; // address of pointer
  // double pointer
  int **ptr2 = &ptr; // second * is for syntax
  cout << ptr2 << endl;

  int ***ptr3 = &ptr2;

  cout << ***ptr3 << endl;

  return 0;
}
