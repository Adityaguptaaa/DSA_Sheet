// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     vector<int> arr = {7,1,5,3,6,4};
//     int maxprofit = 0;
//     for(int i=0;i<arr.size();i++){
//         for(int j = i+1;j<arr.size();j++){
//             maxprofit = max(maxprofit,arr[j]-arr[i]);
//         }
//     }

//     cout << maxprofit << endl;
// }




                                                //Optimal

#include<bits/stdc++.h>
using namespace std;

int main(){
        vector<int> arr = {7,1,5,3,6,4};
        int min=arr[0];
        int maxprofit = 0;
        for(int i=1;i<arr.size();i++){
            maxprofit = max(maxprofit,arr[i]-min);
            if(arr[i] < min){
                min = arr[i];
            }
        }

        cout << maxprofit << endl;
}