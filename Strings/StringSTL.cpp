#include <algorithm>
#include <iostream>
using namespace std;

bool compare(string a, string b) { return a < b; }
int main() {

  string s("Hello World");
  cout << s << endl;

  string s2 = "Another Way";
  cout << s2 << endl;
  cout << s2.length();
  for (int j = 0; j < s2.length(); j++) {
    cout << s2[j] << " ";
  }

  cout << endl;

  string s3;
  getline(cin, s3, ' ');
  // This is little different than cin.getline(array, size)
  // This takes input a sentence in a string
  // s3 = cin.getline();    // wrong
  cout << s3 << endl;

  string arr[] = {"Apple", "Pineapple", "Mango", "Guava"};
  sort(arr, arr + 4, compare);
  for (int i = 0; i < 4; i++) {
    cout << arr[i] << " ";
  }

  char first[] = "kunal";
  char second[] = "kunal";
  // cin.getline(first, 5, '.');
  if (strcmp(first, second) == 0) {
    cout << "EQUAL" << endl;
  }

  string name = "kunal";
  string second = name;

  cout << &name << endl << &second << endl; // different locations!

  return 0;
}
