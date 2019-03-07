#include <iostream>
using namespace std;

bool compare(string a, string b) {
  if (a.length() < b.length()) {
    return true;
  }
  return a < b;
}

int main() {
  // 1
  char words[10][100] = {"apple", "banana", "mango"};
  // note: above - "apple" is terminated by null automatically, for all

  cout << words[0] << endl; // apple
  cin.getline(words[3], 100);
  cout << words[3] << endl;

  cin.getline(words[4], 100);
  cout << words[4] << endl;

  // 2
  string s[10] = {"apple", "mango", "banana", "papaya", "o"};
  int n = 5;
  for (int i = 0; i < n; i++) {
    cout << s[i] << " ";
  }
  cout << s[0] << endl; // each element is terminated by null

  sort(s, s + 5, compare);
  for (int i = 0; i < n; i++) {
    cout << s[i] << " ";
  }
  cout << endl;

  return 0;
}
