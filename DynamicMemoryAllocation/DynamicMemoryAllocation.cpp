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
  delete[] arr; // this means that if now we create a new array or something, it
                // can take this memory even tho the value is still in this
                // memory and if we try to acces it using arr[0] we will still
                // get the answer. but the point of delete is that even tho
                // there is still something in this memory and still has
                // reference to arr, now if some other array is created it is
                // free to override this arr memory.
  cout << arr[2];

  return 0;
}
