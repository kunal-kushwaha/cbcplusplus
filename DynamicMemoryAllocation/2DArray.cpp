#include <iostream>
using namespace std;
int main() {
  int r, c;
  cin >> r >> c;
  int **arr = new int *[r]; // create a primary array in heap
  for (int i = 0; i < r; i++) {
    arr[i] = new int[c]; // create secondary arrays
  }

  // input
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> arr[i][j];
    }
  }
  // output
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // using delete
  for (int i = 0; i < r; i++) {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}
