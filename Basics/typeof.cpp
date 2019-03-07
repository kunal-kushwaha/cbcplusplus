#include<iostream>
#include<typeinfo>
using namespace std;
int main(){

    int a;
    float b;
    double c;
    long d;
    long int e;
    long long int f;
    long double g;

    cout << sizeof(a) << endl;
    cout << typeid(a).name() << endl;
    cout << endl;
    cout << sizeof(b) << endl;
    cout << typeid(b).name() << endl;
    cout << endl;
    cout << sizeof(c) << endl;
    cout << typeid(c).name() << endl;
    cout << endl;
    cout << sizeof(d) << endl;
    cout << typeid(d).name() << endl;
    cout << endl;
    cout << sizeof(e) << endl;
    cout << typeid(e).name() << endl;
    cout << endl;
    cout << sizeof(f) << endl;  // 8
    cout << typeid(f).name() << endl;   // x
    cout << endl;
    cout << sizeof(g) << endl;
    cout << typeid(g).name() << endl;
    cout << endl;

    return 0;
}
