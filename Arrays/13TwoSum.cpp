                                                                            //brute force

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>arr = {2,6,5,8,11,4};
//     int target = 15;

//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             if(arr[i]+arr[j]){
//                 cout << "Yes" << endl;
//                 return 0;
//             }
//         }
//     }
//     cout << "No" << endl;
// }

                                                                            //better

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>arr = {2,6,5,8,11,4};
//     int target = 15;
//     map<int,int>mp;

//     for(int i=0;i<arr.size();i++){
//         int rem = target - arr[i];
//         if(mp.find(rem) != mp.end()){
//             cout << "Yes" << endl;
//             cout << "{"<< mp[rem] << "," << i << "}" << endl;
//             return 0;
//         }

//         mp[arr[i]] = i;
//     }
//     cout << "No" << endl;
// }



                                                                            //optimal
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>arr = {2,6,5,8,11,4};
//     int target = 15;

//     sort(arr.begin(),arr.end());
//     int i=0,j=arr.size()-1;
    
//     while(i<j){
//         if(arr[i]+arr[j] == target){
//             cout << "yes"<<endl;
//             return 0;
//         }
//         else if(arr[i]+arr[j] > target){
//             j--;
//         }else{
//             i++;
//         }
//     }
//     cout << "No" << endl;
// }



                                                                            //optimal
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {2,6,5,8,11,4};
    int target = 15;
    

    vector<pair<int,int>>idxArr;
    for(int i=0;i<arr.size();i++){
        idxArr.push_back({arr[i],i});
    }

    sort(idxArr.begin(),idxArr.end());

    int i=0,j=arr.size()-1;
    
    while(i<j){
        if(idxArr[i].first + idxArr[j].first == target){
            cout << "{" << idxArr[i].second << "," << idxArr[j].second << "}" << endl;
            return 0;
        }
        else if(idxArr[i].first+idxArr[j].first > target){
            j--;
        }else{
            i++;
        }
    }
    cout << "{-1,-1}" << endl;
}