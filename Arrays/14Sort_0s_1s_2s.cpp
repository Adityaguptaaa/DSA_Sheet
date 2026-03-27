                                                        //brute force

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>nums = {0,1,0,1,1,2,0,1,2,2,2,1};
//     sort(nums.begin(),nums.end());                          // we can use any sorting algorithm
    
//     for(int x : nums){
//         cout << x << " ";
//     }
// }

                                                        //better
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>nums = {0,1,0,1,2,0,1,1,2};

//     int cnt0=0,cnt1=0,cnt2=0;
//     for(int x : nums){
//         if(x==0){
//             cnt0++;
//         }
//         else if(x == 1){
//             cnt1++;
//         }else{
//             cnt2++;
//         }
//     }
//     int idx = 0;
//     while(cnt0--){
//         nums[idx++] = 0;
//     }
//     while(cnt1--){
//         nums[idx++] = 1;
//     }
//     while(cnt2--){
//         nums[idx++] = 2;
//     }

//     for(int x : nums){
//         cout << x << " ";
//     }
// }


                                                        //optimal
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {0,1,0,1,1,2,0,1,2,2,2,1};
    int low=0,mid=0,high=nums.size()-1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }


    for(int x : nums){
        cout << x << " ";
    }
}