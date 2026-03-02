#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,5,3,9,7,24,28,30,1,9,4};
    int n = sizeof(arr)/sizeof(int);
    int largest = INT_MIN;
    int seclargest = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            seclargest = largest;
            largest = arr[i];
        }
    }

    cout << "The largest elemnt is: " << largest << endl;
    cout << "The second largest element is: " << seclargest << endl;
}