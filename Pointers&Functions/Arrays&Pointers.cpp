#include <iostream>
using namespace std;

void print(int a[]) {
  cout << a << endl;
  cout << "sizeof print " << sizeof(a)
       << endl; // size of pointer because address is passed
}
void print2(int *a) {
  cout << a << endl;
  cout << "sizeof print2 : " << sizeof(a) << endl; // size of pointer
}

void print3(int *a, int n) {
  for (int i = 0; i < n; i++) {
    // cout << a[i] << " ";
    // same as
    cout << *(a + i) << " ";
  }
}

int main() {

  int a[] = {1, 2, 3, 4};

  cout << a << endl;
  cout << &a << endl;
  print(a);
  print2(a);
  // print2(&a[0]);

  cout << "sizeof in main : " << sizeof(a)
       << endl; // gives size of entire array
  cout << "sizeof in main : " << sizeof(&a) << endl;

  print3(a, 4);

  int c[] = {6, 7, 8, 9};
  int *b = c;
  cout << b[3];
  // same as
  cout << *(b + 3);

  return 0;
}
