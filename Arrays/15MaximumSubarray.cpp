#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    int max1 = INT_MIN;
    for(int i=0;i<nums.size();i++){
        int sum = 0;
        for(int j=i;j<nums.size();j++){
            sum += nums[j];
            if(sum > max1){
                max1 = sum;
            }
        }
    }
    cout << max1 << endl;
}