#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout << &a << endl;

    // Address of operator : & - gives address of a variable
    // address will be a hexadecimal format

    float y = 10.5;
    cout << &y << endl;

    // It does not work for character variables
    char ch = 'a';
    cout << &ch << endl;    // this happens because of operator overloading
                            // because when you use cout << &character, it prints the character in the address instead of the address

    // we can typecast the address like :
    cout << (void *)&ch << endl;
    // explicit typecasting to void * : means we do not know the datatype
    // means you are telling cout that the address you are supplying is not of character instead it's of type void *.
    // can also use int *

    return 0;
}
