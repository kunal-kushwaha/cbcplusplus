#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool compare(int a, int b) { return a > b; }
int main() {
  // Like ArrayList in Java
  // Once a vector is full, it will double itself and copy the current elements.

  // reserve means initially the vector will have some size that you provide
  // vector is an inbuilt template class

  vector<int> v;
  // can also do it like
  // vector<int> v(5, 0); // 5 is initial capacity and 0 is the Value to be
  // assigned to each element of container.
  v.reserve(100);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
    // v[i] = temp; // Error because this memory may not exist.
    // i.e. segmentation error
  }

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  v.pop_back();
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  // sort a vector
  sort(v.begin(), v.end(), compare);
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  // begin() returns a random access iterator pointing to the first element of
  // the vector.
  // end() returns an iterator which points to past-the-end element in the
  // vector container. The past-the-end element is the theoretical element that
  // would follow the last element in the vector.

  cout << v.capacity() << endl; // gives total space allocated even after
                                // doubling if doubling happened
  cout << v.max_size() << endl; // max memory vector can have on your system
  // that is how much it can expand

  cout << v.front() << endl; // last element
  cout << v.back() << endl;  // first element

  v.insert(v.begin(), 19);

  // at() returns reference to the element present at location n in the vector.
  cout << v.at(0);

  v.clear(); // everything deleted

  // 2-d matric with vectors
  int r, c, n;
  cin >> r >> c;
  vector<vector<int> > arr(r);
  for(int i = 0; i < r; i++){
      arr[i] = vector<int>(c);
      for(int j = 0; j < c; j++){
          cin >> n;
          arr[i][j] = n;
      }
  }

  for (int i = 0; i < r; i++) {
      for (int j = 0; j < arr[i].size(); j++)
          cout << arr[i][j] << " ";
      cout << endl;
  }

  return 0;
}
