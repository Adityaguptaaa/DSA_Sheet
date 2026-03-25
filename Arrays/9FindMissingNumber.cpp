// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>nums = {0,1,3,4,2};
//     int k = 0;
//     sort(nums.begin(),nums.end());
//     for(int x : nums){
//         if(x == k){
//             k++;
//         }else{
//             break;
//         }
//     }

//     cout << k << endl;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>nums = {0,1,3,4,2};
//     int sum = 0;
//     for(int x : nums){
//         sum += x;
//     }

//     int realsum = nums.size()*(nums.size()+1)/2;
//     cout << realsum - sum << endl;
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {0,1,3,4,2};
    map<int,int>freq;
    for(int x : nums){
        freq[x]++;
    }


    for(int i=0;i<=nums.size();i++){
        if(freq[i] == 0){
            cout << i << endl;
            break;
        }
    }
}