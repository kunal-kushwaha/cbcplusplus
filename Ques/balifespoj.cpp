#include <iostream>
using namespace std;

int sum(int num[], int n) {
  int s = 0;
  for (int i = 0; i < n; i++) {
    s += num[i];
  }
  return s;
}

void display(int nums[], int n) {
  for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

int fun(int num[], int n, int avg, int sum) {
  if (sum % n != 0) {
    return -1;
  } else {
    for (int i = 0; i < n; i++) {
      num[i] = num[i] - avg;
    }
    // display(num, n);
    for (int i = 1; i < n; i++) {
      num[i] = abs(num[i] + num[i - 1]);
    }
    // display(num, n);
    int max = -1;
    for (int i = 0; i < n; i++) {
      if (max < num[i]) {
        max = num[i];
      }
    }
    return max;
  }
}

int main() {
  int nums[4] = {0, 10, 0, 6};
  int s = sum(nums, 4);
  int avg = s / 4;

  cout << fun(nums, 4, avg, s) << endl;

  return 0;
}
