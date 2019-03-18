#include <iostream>
using namespace std;

// when a function is removed from callstack, it's local variables also get
// destroyed.

int factorial(int num) {
  int ans = 1;
  for (int i = 1; i <= num; i++) {
    ans = ans * i;
  }
  return ans;
}

// 1
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// 2
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  // int ans = factorial(5);
  // cout << ans << endl;
  int a = 10;
  int b = 20;

  cout << a << " " << b << endl;
  swap(&a, &b); // 1
  // swap(a, b);   // 2
  cout << a << " " << b << endl;

  return 0;
}
