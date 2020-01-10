#include<iostream>
using namespace std;
int main() {
    string s = "kunal";   
    char * ptr = new char [s.length()+1];
    strcpy (ptr, s.c_str());
    cout << ptr << endl;    // kunal : because it will read till it finds null
    cout << *ptr << endl;   // k : because pointer points to first index
                            // & char pointer will automatically show char instead of address
}





