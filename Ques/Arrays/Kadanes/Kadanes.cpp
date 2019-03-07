#include<iostream>
using namespace std;
int main(){

    // O(N) Solution

    int n;
    cin >> n;
    int a[1000];
    int cs = 0; // current sum
    int ms = 0; // max sum

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Kadane's Algorithm for maximun subarray sum

    for(int i=0; i < n; i++){
        cs = cs + a[i];
        if (cs < 0){
            cs = 0;
        }
        ms = max(cs, ms);
    }

    cout << ms;

    return 0;
}
