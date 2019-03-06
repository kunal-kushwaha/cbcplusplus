#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int *ptr = &a;
    int *ptr2= ptr;

    cout << *ptr << endl;
    cout << *ptr2 << endl;

    int b = 20;
    *ptr2 = b;  // was pointing to the same location ad ptr and this changes what was in that location
    // hence it is changed for both. if i had done ptr2 = &b, then ptr2 will point to b but no change in ptr.

    cout << *ptr << endl;   // 20
    cout << *ptr2 << endl;  // 20

    return 0;
}
