#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,2,2,3,4,4,4,5,5};
    int n = sizeof(arr)/sizeof(int);
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    cout << "The sorted array of Unique Element: ";
    for(int k=0;k<=i;k++){
        cout << arr[k] << " ";
    }
}