#include <iostream>
using namespace std;
int main() {
  int *a = new int(30);
  cout << *a << endl;

  int *b = new int;
  cout << *b << endl;

  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    // cin >> *(arr + i);
    // same as
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // disalocating the memory
  delete a;
  delete[] arr;
  cout << arr[2];

  return 0;
}
