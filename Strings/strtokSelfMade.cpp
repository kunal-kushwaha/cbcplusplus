#include <iostream>
using namespace std;
char *mystrtok(char str[], char delim) {

  static char *input = NULL;

  if (str != NULL) {
    input = str;
  }
  if (input == NULL) {
    return NULL;
  }

  char *output = new char[strlen(input) + 1];
  // +1 for the '\0' or null chara at the end.
  // return a word as a dynamically allocated word array from my function.
  // cannot return a static array because it is destroyed
  // read the word from input and store it in output and just return the word
  // till delim
  int i;
  for (i = 0; input[i] != '\0'; i++) {
    if (input[i] != delim) {
      // copy the char into output array
      output[i] = input[i];
    } else {
      // you are now at delim
      output[i] = '\0';
      input = input + i + 1;
      return output;
    }
  }
  // return the last word even if delim is not there
  output[i] = '\0';
  input = NULL;
  return output;
}

int main() {
  //
  char str[] = "Hi, I am teaching about strings, in C++";
  char *ptr;

  ptr = mystrtok(str, ',');
  while (ptr != NULL) {
    cout << ptr << endl;
    ptr = mystrtok(NULL, ',');
  }

  return 0;
}
