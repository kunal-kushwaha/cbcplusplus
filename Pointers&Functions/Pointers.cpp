#include<iostream>
using namespace std;
int main(){

    // A pointer variable holds the address of another variable

    int a = 10;
    int *y = &a;    // should of of the same type as a

    // OR
    // int *y; // by default garbage value
    // y = &a;

    // int y = &a; // error
    // int *y = a; // error

    cout << y << endl;  // address
    // same as
    cout << &a << endl;

    cout << *y << endl; // 10

    // size of a pointer :
    // depends on the system : either 4 bytes or 8 bytes
    // 8 if it's a 64-bit system. means largest memory address can be of 2^64
    // if many cells of a datatype, & will return the address of the first cell :
    // this is why size of address does not depend on the size of datatype

    cout << sizeof(y) << endl; // 8
    cout << sizeof(*y) << endl; // 4

    char ch = 'a';
    char *chptr = &ch;
    cout << sizeof(chptr) << endl;  // 8
    cout << sizeof(*chptr) << endl;    // 1

    // dont store address of different type in a pointer
    // because say you did char *ptr = a, where a is int. char occupies only 1 cell
    // but int occupies 4, hence reading a now will only print 1 cell and not all 4.

    // Re-assign another address to the variable :

    int d = 36;
    y = &d;
    cout << &d << endl;
    cout << y << endl;

    return 0;
}
