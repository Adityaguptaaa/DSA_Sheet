#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    for(int i=1;i<n;i++){
        if(arr[i-1] > arr[i]){
            cout << "Array is not sorted" << endl;
            return 0;
        }
    }
    cout << "Array is sorted" << endl;
}