#include <iostream>

using namespace std;
int main() {

  int array[5];

  cout << array << " " << &array << endl;
  cout << array + 1 << " " << &array + 1 << endl;

  /*
  Basically, “array” is a “pointer to the first element of array”
  but “&array” is a “pointer to whole array of 5 int”.
  Since “array” is pointer to int, addition of 1 resulted in an
  address with increment of 4 (assuming int size in your machine
  is 4 bytes). Since “&array” is pointer to array of 5 ints,
  addition of 1 resulted in an address with increment of
  4 x 5 = 20 = 0x14.
  */

  int arr[5] = {3, 5, 2, 1, 6};

  int *ptr = &arr[0];
  // same as int *ptr = arr;

  for (int i = 0; i < 5; i++) {
    cout << *(ptr + i);
  }

  return 0;
}
