#include <iostream>
using namespace std;
void readA(int a[][10], int R, int C) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cin >> a[i][j];
    }
  }
}

void staircase(int a[][10], int r, int c, int target) {
  int i = 0, j = c - 1;
  while (i < r && j >= 0) {
    if (a[i][j] == target) {
      cout << "Found at " << i << "," << j << endl;
      return;
    }
    if (target > a[i][j]) {
      i++;
    } else if (target < a[i][j]) {
      j--;
    }
  }
  cout << "Not Found" << endl;
}

int main() {
  // arrays is sorted along the rows and along the columns
  // find an element in it.
  /*
  1  4  8  10
  2  5  9  15
  6  16  18  20
  11  17  19  23
  */
  // find 17 :
  // start from any one corner say (0,3)

  int a[10][10];
  int r, c;
  cin >> r >> c;
  readA(a, r, c);
  staircase(a, r, c, 17);
  return 0;
}
