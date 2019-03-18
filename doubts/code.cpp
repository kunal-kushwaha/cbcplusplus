#include <iostream>
#include <vector>
using namespace std;
int main() {

  // int a = 30;
  // double d = a;
  // cout << d << endl;
  // printf("%3lf", d);
  // int a = 1;
  // int b[] =
  // {... }

  // int a[] = {1, 32};
  //
  // cout << a << endl;
  // cout << a + 1 << endl;
  // cout << &a << endl;
  // cout << &a + 1 << endl;

  // int *b = {1, 2, 3, 4};
  // cout << *b << endl;

  // vector<int> v;
  // v.push_back(7);
  // v.push_back(17);
  // v.insert(begin(), 18);
  // cout << v.size() << endl;

  // int *arr = new int[10];
  // arr[0] = 5;
  // arr[1] = 3;
  //
  // delete[] arr;
  // arr = NULL;
  // cout << arr[0]; //  ??

  // long int a = 1422;
  // long long int b = 999;
  //
  // cout << sizeof(a) << " " << sizeof(b) << endl; // 8 8

  // int a[] = {1, 2, 3, 4};
  // void *arr = a;
  // cout << arr << endl;

  char ch[] = {'a', 'b'};
  cout << (int *)ch << endl; // meaning?

  return 0;
}
