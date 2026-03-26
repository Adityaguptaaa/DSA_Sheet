#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>arr = {0,1,1,0,0,0,1,1,1,0,0};
    int count = 0;
    int max1 = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == 1){
            count++;
        }else{
            count = 0;
        }
        max1 = max(count,max1);
    }
        cout << max1 << endl;
}