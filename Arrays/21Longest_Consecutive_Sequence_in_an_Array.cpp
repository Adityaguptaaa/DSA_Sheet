//                                                 //Brute Force

// #include<bits/stdc++.h>
// using namespace std;

// bool linearsearch(int n,vector<int>nums){
//     for(int i=0;i<nums.size();i++){
//         if(nums[i] == n){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     vector<int>nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
//     int maxlength = 0;
//     for(int i=0;i<nums.size();i++){
//         int length = 1;
//         int x = nums[i];
//         while(linearsearch(x+1,nums)){
//             x++;
//             length++;
//         }

//         maxlength = max(length,maxlength);
//     }

//     cout << maxlength << endl;
// }





                                                // Better 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};

//     // if the array is empty
//     if(nums.size() == 0){
//         cout << 0 << endl;
//         return 0;
//     }

//     sort(nums.begin(),nums.end());
//     int maxlength = 1;
//     int length  = 1;
//     for(int i=1;i<nums.size();i++){
//         if(nums[i] == nums[i-1]){
//             continue;
//         }
//         else if(nums[i]-1 == nums[i-1]){
//             length++;
//         }else{
//             length = 1;
//         }
//         maxlength = max(maxlength,length);
//     }

//     cout << maxlength << endl;
// }



                                                //optimal


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    if(nums.size() == 0 ){
        cout << 0 << endl;
        return 0;
    }
    unordered_set<int>st;
    for(int x : nums){
        st.insert(x);
    }

    int maxlength = 1;
    for(int it : st){
        if(st.find(it-1) == st.end()){
            int length = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                length++;
                x++;
            }
            maxlength = max(length,maxlength);
        }
    }
    cout << maxlength << endl;
}