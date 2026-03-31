//                                                     // Brute Force

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> nums = {3, 1, -2, -5, 2, -4};

//     vector<int> positive, negative;
//     for (int x : nums){
//         if (x > 0){
//             positive.push_back(x);
//         }else{
//             negative.push_back(x);
//         }
//     }

//     int i = 0, j = 0;
//     int k = 0;
//     while (i < positive.size() && j < negative.size()){
//         if (k % 2 == 0){
//             nums[k++] = positive[i++];
//         }else{
//             nums[k++] = negative[j++];
//         }
//     }

//     while (i < positive.size()){
//         nums[k++] = positive[i++];
//     }

//     while (j < negative.size()){
//         nums[k++] = negative[j++];
//     }


//     // If there is same numbers of positives and negatives so we run only first while loop & replace '&&' with '||' operator

//     for(int x : nums){
//         cout << x  << " ";
//     }
// }


                                    //optimal (if same numbers of positives and negatives)


#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int>ans(nums.size());

    int pos = 0;
    int neg = 1;
    for(int i=0;i<nums.size();i++){
        if(nums[i] > 0){
            ans[pos] = nums[i];
            pos += 2;
        }else{
            ans[neg] = nums[i];
            neg += 2;
        }
    }

    for(int x : ans){
        cout << x << " ";
    }

}
