#include <iostream>
using namespace std;
int main() {
  // Declare
  // int a[10];  // indexes initially have garbage values

  int a[10] = {
      1, 2,
      3}; // rest will have 0 by default here and not garbage if we initialize

  int b[10] = {0}; // all elements 0
  // 10 is maximum size you can give to the array

  // input
  for (int i = 0; i <= 9; i++) {
    cin >> a[i];
  }

  for (int i = 0; i <= 9; i++) {
    cout << a[i] << " ";
  }

  int aa[] = {1, 2, 3};
  int *bb = aa;

  bb[1] = 5; // will change a too
  cout << aa[1] << endl;

  return 0;
}
