#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int max1 = 0;
    for(int i=0;i<nums.size();i++){
        int sum = 0;
        for(int j=i;j<nums.size();j++){
            sum += nums[j];
            if(sum == k){
                max1 = max(max1,j-i+1);
            }
        }
    }

    cout << max1 << endl;
}