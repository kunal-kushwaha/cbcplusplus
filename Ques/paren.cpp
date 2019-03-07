#include <iostream>
using namespace std;

void generate(char *output, int pos, int o, int c, int n) {
  if (c == n) {
    output[pos] = '\0';
    cout << output << endl;
    return;
  }

  if (c < o) {
    output[pos] = ')';
    generate(output, pos + 1, o, c + 1, n);
  }

  if (o < n) {
    output[pos] = '(';
    generate(output, pos + 1, o + 1, c, n);
  }
}

int main() {
  int n;
  cin >> n;
  char output[100];
  generate(output, 0, 0, 0, n);
  return 0;
}
