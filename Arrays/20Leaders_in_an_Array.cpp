                                                // brute force


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> nums = {1, 2, 5, 3, 1, 2};
//     vector<int>ans;

//     for(int i=0;i<nums.size();i++){
//         bool leader = true;
//         for(int j=i+1;j<nums.size();j++){
//             if(nums[j] > nums[i]){
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader){
//             ans.push_back(nums[i]);
//         }
//     }

//     for(int x : ans){
//         cout << x << " ";
//     }
// }




                                                //Optimal

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 5, 3, 1, 2};
    vector<int>ans;
    int max = INT_MIN;
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i] > max){
            max = nums[i];
            ans.push_back(max);
        }
    }

    reverse(ans.begin(),ans.end());

    for(int x : ans){
        cout << x << " ";
    }
}