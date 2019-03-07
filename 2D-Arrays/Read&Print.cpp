#include <iostream>
using namespace std;

void readA(int a[][10], int R, int C) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cin >> a[i][j];
    }
  }
}

void printA(int a[][10], int R, int C) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int a[10][10];
  int R, C;
  cin >> R >> C;
  readA(a, R, C);
  printA(a, R, C);

  return 0;
}
