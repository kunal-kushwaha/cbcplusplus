#include<iostream>
#include<typeinfo>
using namespace std;
int main(){

    char a[100];    // size is 100 bytes
    // every char array is terminated by a null character \0.
    // this may or maynot happen automatically

    char arr[] = {'a', 'b', 'c'};
    cout << arr << endl;    // abc or abc+some garbage if box contains null in the end
    // hence right way is :
    char ar[] = {'a', 'b', '\0'};
    cout << ar << endl;

    char array[] = "hello";     // always terminated by null, size is 6
    // char array[6] = "he";   // error
    cout << array << endl;

    // use cin.getline() for including whitespaces
    // cin.getline(array, size, delimiter)  // delimiter tells when to stop reading
    // by default deliminiter is \n
    char c[100];
    cin.getline(c,100);
    cout << c << endl;

    char para[1000];
    cin.getline(para, 1000, '.');
    cout << para << endl;

    // cin to read a word.
    // cin.get to read a character including whitespaces.
    // cin.getline to read a paragraph or a sentence.

    return 0;
}
