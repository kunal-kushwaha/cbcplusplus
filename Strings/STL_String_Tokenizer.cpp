#include <cstring>
#include <iostream>
using namespace std;
int main() {
  // Like spilt in Python
  char str[] = "Hi, i am teaching about strings, in C++";

  // char * strtok(char * str, char * delimiters)
  char *ptr;
  ptr = strtok(str, " ");
  cout << ptr << endl; // Hi,

  // ptr = strtok(NULL, " "); // in subsequent calls strtok accepts NULL pointer
  // cout << ptr << endl; // i
  // do this till it return null

  while (ptr != NULL) {
    ptr = strtok(NULL, " ,"); // both space and comma will be removed
    // NULL as parameter specifies that extract strings from original strings
    // Means that strtok contains a static variable which stores the state of
    // string in the previous function call
    cout << ptr << endl;
  }

  return 0;
}
