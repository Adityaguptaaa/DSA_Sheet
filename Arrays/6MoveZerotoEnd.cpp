                                    // brute force

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[] = {1,2,0,4,3,0,0,8,2,0,6,1,2};
//     int n = sizeof(arr)/sizeof(int);

//     vector<int>temp;
//     for(int i=0;i<n;i++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }

//     int size = temp.size();
//     for(int i=0;i<size;i++){
//         arr[i] = temp[i];
//     }

//     for(int i=size;i<n;i++){
//         arr[i] = 0;
//     }

//     for(int x : arr){
//         cout << x << " ";
//     }
// }

                                //optimal solution 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,0,4,3,0,0,1,8,2,0,6,1,2};
    int n = sizeof(arr)/sizeof(int);

    int i=0;
    int j=1;
    while(i<n && j<n){
        if(arr[i] == 0 && arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[i] == 0 && arr[j] == 0){
            j++;
        }
        else{
            i++;
            j++;
        }
    }

    for(int x : arr){
        cout << x << " ";
    }
}