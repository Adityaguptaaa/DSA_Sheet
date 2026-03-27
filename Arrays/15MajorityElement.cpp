                                        //Brute Force

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>nums =  {5,7,5,7,5,2,1,4,5,7,7,7,5,5,5,5,7,5,5};

//     for(int i=0;i<nums.size();i++){
//         int cnt = 0;
//         for(int j=0;j<nums.size();j++){
//             if(nums[j] == nums[i]){
//                 cnt++;
//             }
//         }
//         if(cnt > nums.size()/2){
//             cout <<  nums[i] << endl;
//             return 0;
//         }
//     }
//     cout << -1 << endl;
//     return -1;
// }

                                        //BETTER 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>nums =  {5,7,5,7,5,2,1,4,5,7,7,7,5,5,5,5,7,5,5};
//     map<int,int>freq;
//     for(int x : nums){
//         freq[x]++;
//     }

//     for(auto it : freq){
//         if(it.second > nums.size()/2){
//             cout << it.first << endl;
//             return 0;
//         }
//     }

//     cout << -1 << endl;
//     return 0;
// }



                                    //Moore's Algorithm

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums =  {5,7,5,7,5,2,1,4,5,7,7,7,5,5,5,5,7,5,5};

    int cnt = 0;
    int el;
    for(int i=0;i<nums.size();i++){
        if(cnt == 0){
            cnt++;
            el = nums[i];
        }
        else if(nums[i] == el){
            cnt++;
        }else{
            cnt--;
        }
    }

    int count = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == el){
            count++;
        }
    }

    if(count > nums.size()/2){
        cout << el << endl;
    }else{
        cout << -1 << endl;
    }
}