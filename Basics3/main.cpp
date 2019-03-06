#include <iostream>

using namespace std;

int y = 100; // global variable
int x = 1000;
int main() {

    int a;
    cout << sizeof(a);  // 4 bytes
    cout << sizeof(int);  // 4 bytes
    cout << sizeof(long);   // 8 bytes
    cout << sizeof(long long); // 8 bytes
    cout << sizeof(char);   // 1 byte
    cout << sizeof(bool);   // 1 byte
    cout << sizeof(double); // 8 bytes
    cout << sizeof(float);  // 4 bytes
    cout << endl;

    // Ternary Operator
    int num = 3;

    num&1 ? cout << "ODD\n" : cout << "EVEN\n";

    // Scope of a variable
    // 1. Lifetime : when a variable is created and when it was destroyed
    // 2. Visible : region in which that variable is accessible

    // Local Variables : Block Scope {} : Acquire the part of the memory called Stack Segment.
    // Global Variables : Declared outside main : Lie outside stack segment, they have more life
    // global variables : will be created early and destroyed at the end

    int x = 10; // is this is commented, it will print 1000 (global x) i.e. compiler starts from inner most scope then moves out
    cout << x << endl;     // if we dont initialise: here it might give 0 but it can give any value
    cout << y << endl;

    // to use the outer global : we need to use SCOPE RESOLUTION OPERATOR : it will give global variable
    // if global not present it will give error
    ::x = ::x + 2;
    cout << ::x << endl;    // global x

    // loop :
    for(int i=0; i < 10; i++){

    }
//    cout << i << endl;    // error, i had scope within for loop. it was destroyed when for loop was over

    // cin vs cin.get
    // cin : what you type goes into inout buffer and cin reads it from the input buffer.
    // example : if int a,b; cin >> a>> b;
    // in console you type 12 20. 12 20 will be stored in inout buffer,then cin will read numbers till it finds a space and assign the value to a, and so on.

    // Now suppose you want to read a string "hey kunal", cin will just read "hey"
    // this is why we use cin.get()

    // cin.get : read all chars including space, table, newline
    // ch = cin.get();  // use while loop for stopping at terminating point

    // READING TILL END OF FILE

    int no;
    // If scanf finds nothing it will return EOF
    while(scanf("%d", &no) != EOF){
        cout << no*no << endl;
    }

    return 0;
}