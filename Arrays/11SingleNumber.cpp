#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {4,1,2,1,2};
    map<int,int>freq;
    for(int x : arr){
        freq[x]++;
    }

    for(auto it : freq){
        if(it.second == 1){
            cout << it.first << endl;
            break;
        }
    }
}



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>arr = {4,1,2,1,2};
//     int ans = 0;
//     for(int x : arr){
//         ans ^= x;
//     }
//     cout << ans << endl;
// }