// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>nums1 = {1,2,3,4,5,6};
//     vector<int>nums2 = {2,4,6,7,9};

//     set<int>s;
//     for(int x : nums1){
//        s.insert(x);
//     }

//     for(int x : nums2){
//         s.insert(x);
//     }

//     vector<int>ans;
//     for(int x : s){
//        ans.push_back(x);
//     }
    
//     for(int x : ans){
//         cout << x << " ";
//     }
// }


                                //2 pointer approach

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums1 = {3,4,6,7,9,9};
    vector<int>nums2 = {1,5,7,8,8};

    vector<int>ans;
    int i=0,j=0;

    while(i<nums1.size() && j < nums2.size()){
        if(nums1[i] < nums2[j]){
            if(ans.empty() || ans.back()!=nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
        }
        else if(nums1[i] > nums2[j]){
            if(ans.empty() || ans.back()!=nums2[j]){
                ans.push_back(nums2[j]);
            }
            j++;
        }
        //if both are equal
        else{
            if(ans.empty() || ans.back() != nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }

    while(i < nums1.size()){
        if(ans.empty() || ans.back() != nums1[i]){
            ans.push_back(nums1[i]);
        }
        i++;
    }

    while(j < nums2.size()){
        if(ans.empty() || ans.back() != nums2[j]){
            ans.push_back(nums2[j]);
        }
        j++;
    }


    for(int x : ans){
        cout << x << " ";
    }
}