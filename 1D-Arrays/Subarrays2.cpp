#include <iostream>
using namespace std;
int main() {

  int n;
  cin >> n;

  int a[1000];
  int cumSum[1000] = {0};
  int maxSum = 0;
  int currentSum = 0;

  int left = -1;
  int right = -1;

  cin >> a[0];
  cumSum[0] = a[0];
  for (int i = 1; i < n; i++) {
    cin >> a[i];
    cumSum[i] = a[i] + cumSum[i - 1];
  }

  for (int i = 0; i < n; i++) {
    cout << cumSum[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      currentSum = 0;
      currentSum = cumSum[j] - cumSum[i - 1];
      if (currentSum > maxSum) {
        maxSum = currentSum;
        left = i;
        right = j;
      }
    }
  }

  cout << maxSum << endl;

  // NOTE :
  int ab[] = {1, 2, 3, 4, 5};
  int *arr = ab;
  cout << ab[1] << endl;
  // same as
  cout << *(ab + 1) << endl;
  // same as
  cout << arr[1] << endl;
  // same as
  cout << *(arr + 1) << endl;

  // this is because of this :
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

  return 0;
}
