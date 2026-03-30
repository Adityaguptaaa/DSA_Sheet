                                        //better

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
//     int max1 = INT_MIN;
//     for(int i=0;i<nums.size();i++){
//         int sum = 0;
//         for(int j=i;j<nums.size();j++){
//             sum += nums[j];
//             if(sum > max1){
//                 max1 = sum;
//             }
//         }
//     }
//     cout << max1 << endl;
// }



                                                //optimal
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
//     int sum=0,max1 = INT_MIN;

//     for(int i=0;i<nums.size();i++){
    //      sum += nums[i];
    //      max1 = max(max1,sum);
//         if(sum < 0){
//             sum = 0;
//         }
//     }
//     cout << max1 << endl;
// }


                                        // for printing

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    int sum = 0,max1=INT_MIN;
    int startidx = 0,endidx;

    for(int i=0;i<nums.size();i++){
        if(sum == 0) startidx = i;
        sum += nums[i];
        if(max1 < sum){
            max1 = sum;
            endidx = i;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout << max1 << endl;
    for(int i=startidx;i<endidx;i++){
        cout << nums[i] << " ";
    }
}