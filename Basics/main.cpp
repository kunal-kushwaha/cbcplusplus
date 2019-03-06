// basic template for a C++ code

#include <iostream>
// iostream is header file : contains code for input and output instructions

using namespace std;    // we are working as per the standard namespace of C++

// main denotes the starting of the program
// execution always starts from main
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    cout << sum << endl;
    double d = 0.0;
    cout << d << endl;

    char ch = 65;
    cout << ch;
//    cout << "Hello World!";

    // Type Conversion
    // Declaration
    int aa,bb,cc;
    float avg;

    // Input
    cin >> aa >> bb >> cc;

    // Processing
//    avg = (a + b + c) / 3;  // will give int value : int / int  = int

    // can store int in a float, but storing float in int will remove the decimal!

    avg = float(a+b+c) / 3;

    // Output
    cout << avg << endl;

    // Typecasting

    int num = 2;
    char character = 'A';
    // Implicit type cast
    cout << num + character << endl;    // converted into int then added

    character = character + 2;

    cout << character << endl; // C

    // Explicit Typecast
    cout << int(character) << bool(character) << endl;


    return 0;
}

// Step 1 : Compilation : .cpp gets converted into .object file
// Step 2 : Execution   : .object file gets converted into .exe file
