                                                        //Brute Force

// #include<bits/stdc++.h>
// using namespace std;

// int subarraySum(vector<int>& nums, int k) {
//     int count = 0;
//     for(int i=0;i<nums.size();i++){
//         int sum = 0;
//         for(int j=i;j<nums.size();j++){
//             sum += nums[j];
//             if(sum == k){
//                 count++;
//             }
//         }
//     }

//     return count;
// }

// int main(){
//     vector<int>nums = {9,4,0,20,3,10,5};
//     int k = 33;
//     int count = subarraySum(nums,k);
//     cout << count << endl;
// }

                                                    //Optimal Approach

#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int sum = 0;
    int cnt = 0;
    unordered_map<int,int>ps;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        if(sum == k)cnt++;
        if(ps.find(sum - k) != ps.end())cnt += ps[sum-k];
        ps[sum]++;
    }
    return cnt;
}


int main(){
    vector<int>nums = {9,4,0,20,3,10,5};
    int k = 33;
    int count = subarraySum(nums,k);
    cout << count << endl;
}