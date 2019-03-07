#include <iostream>
using namespace std;
int main() {

  int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
  // giving number of rows is OPTIONAL if you are initialising like this

  cout << arr[0] << endl;    // means the 0th row, will give address of row 0
  cout << arr[0][0] << endl; // 1

  char a[][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
  cout << a[0] << endl; // note , here we are passing address or 0th row.
  // remember : when we pass address of char in cout, it will print whats in the
  // address till it finds null. here it will only find null after f, hence the
  // output will be abcdef

  char b[][4] = {
      {'a', 'b', 'c', '\0'},
      {'d', 'e', 'f', '\0'}}; // put null cuz it might contain garbage
  cout << b[0] << endl;       // abc
  cout << b[1] << endl;

  // another way of creating list of string :
  char words[10][100] = {"apple", "banana", "mango"};
  // note: above - "apple" is terminated by null automatically, for all

  cout << words[0] << endl; // apple
  cin.getline(words[3], 100);
  cout << words[3] << endl;

  cin.getline(words[4], 100);
  cout << words[4] << endl;

  return 0;
}
