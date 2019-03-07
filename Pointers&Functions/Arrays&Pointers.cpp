#include <iostream>
using namespace std;

void print(int a[]) { cout << a << endl; }
void print2(int *a) { cout << a << endl; }

int main() {

  int a[] = {1, 2, 3, 4};

  cout << a << endl;
  cout << &a << endl;
  print(a);
  print2(a);
  print2(&a[0]);

  cout << endl << sizeof(a); // gives size of entire array

  return 0;
}
