#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3};

    for(int i = 0; i < 3; i++){
        for(int j = i; j < 3; j++){
            for(int k = i; k <= j; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
