#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,3,5,2,6,7,98};
    int n = sizeof(arr)/sizeof(int);

    int target;
    cout << "Enter the number to find in the array: ";
    cin >> target;

    for(int i=0;i<n;i++){
        if(arr[i] == target){
            cout << target << " is found at index " << i << endl;
            return 0;
        }
    }

    cout << target << " is not found in array" << endl;
}