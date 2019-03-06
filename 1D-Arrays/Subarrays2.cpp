#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    int a[1000];
    int cumSum[1000] = {0};
    int maxSum = 0;
    int currentSum = 0;

    int left = -1;
    int right = -1;

    cin >> a[0];
    cumSum[0] = a[0];
    for(int i=1; i < n; i++){
        cin >> a[i];
        cumSum[i] = a[i] + cumSum[i-1];
    }

    for(int i=0; i < n; i++){
        cout << cumSum[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            currentSum = 0;
            currentSum = cumSum[j] - cumSum[i-1];
            if(currentSum > maxSum){
                maxSum = currentSum;
                left = i;
                right = j;
            }
        }
    }

    cout << maxSum << endl;

    return 0;
}
