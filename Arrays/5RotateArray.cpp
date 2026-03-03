                                            // left rotate array 1 place

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5,6,7};
//     int n = sizeof(arr)/sizeof(int);
//     int temp = arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
//     for(int x : arr){
//         cout << x << " ";
//     }
// }


                                            // left rotate array by k places
                                        
                                    //brute force (Time complexity:- O(n+k)    Space complexity:- O(k))
                    
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5,6,7};
//     int n = sizeof(arr)/sizeof(int);

//     int k;
//     cout << "Rotation value: ";
//     cin >> k;

//     k = k%n;
//     int temp[k];
//     for(int i=0;i<k;i++){
//         temp[i] = arr[i];
//     }

//     for(int i=k;i<n;i++){
//         arr[i-k] = arr[i];
//     }
//     int j = 0;
//     for(int i=n-k;i<n;i++){
//         arr[i] = temp[j++];         // j = i - (n-k)
//     }

//     for(int x : arr){
//         cout << x << " ";
//     }

// }


                                    // Optimal approach(Time complexity:- O(2n)  Space Complexity:- O(1))

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6,7};
//     int n = sizeof(arr)/sizeof(int);

//     int k;
//     cout << "Rotation Value: ";
//     cin >> k;

//     int i=0;
//     int j = k-1;

//     // reverse first kth element

//     // reverse(arr,arr+k);
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }

//     i = k;
//     j = n-1;
//     // reverse all elements after kth element

//     // reverse(arr+k,arr+n);
//     while(i<j){
//         swap(arr[i++],arr[j--]);
//     }


//     // reverse whole array

//     // reverse(arr,arr+n);
//     i = 0;
//     j = n-1;
//     while(i<j){
//         swap(arr[i++],arr[j--]);
//     }

//     for(int x : arr){
//         cout << x << " ";
//     }
// }




                                            // right rotate

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5,6,7};
//     int n = sizeof(arr)/sizeof(int);

//     int temp = arr[n-1];
//     for(int i=n-1;i>=0;i--){
//         arr[i] = arr[i-1];
//     }
//     arr[0] = temp;
//     for(int x : arr){
//         cout << x << " ";
//     }
// }


                                            // right rotate by kth place
                                            // optimal
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5,6,7};
//     int n = sizeof(arr)/sizeof(int);

//     int k;
//     cout << "Rotation value: ";
//     cin >> k;
//     reverse(arr,arr+n-k);
//     reverse(arr+n-k,arr+n);
//     reverse(arr,arr+n);

//     for(int x : arr){
//         cout << x << " ";
//     }
// }