//Kadane's Algo - Maximun Subarray Sum
// n size array has n*(n-1) / 2 subarrays


// printing all the possible subarray
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<end;i++){
                cout<<arr[i]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


// in 0(n)^2
// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//     cin>>arr[i];
//     }

//     int maxsum= INT_MIN;
//     for(int st=0;st<n;st++){
//             int currsum =0;
//         for(int end=st;end<n;end++){
//             currsum +=arr[end];
//             maxsum = max(currsum,maxsum);
//         }
//     }
//     cout<<"Max subarray sum is :"<<maxsum<<endl;

//     return 0;
// }


// Now by kadane's Algo  ... NEVER ADD BIG -VE NUMBER 
// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int currsum = 0;
//     int maxsum = INT_MIN;

//     for(int i=0;i<n;i++){
//         currsum +=arr[i];
//         maxsum = max(currsum,maxsum);

//         if(currsum<0){
//             currsum = 0;
//         }
//     }
//     cout<<"Max subarray in Kadane's is :" <<maxsum<<endl;
//     return 0;
// }


// PAIR SUM - RETURN PAIR IN SORTED ARRAY WITH TARGET SUM

// USING BRUTE FORCE APPROACH
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairsum(vector<int>& arr, int n, int target) {
//     vector<int> ans;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] + arr[j] == target) {
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]);
//                 return ans; // Return as soon as the pair is found
//             }
//         }
//     }
//     return ans; // Return an empty vector if no pair is found
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
    
//     vector<int> arr(n);
//     cout << "Enter the elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     int target;
//     cout << "Enter the target sum: ";
//     cin >> target;

//     vector<int> ans = pairsum(arr, n, target);
    
//     if (!ans.empty()) {
//         cout << "Pair with target sum: " << ans[0] << " " << ans[1] << endl;
//     } else {
//         cout << "No pair found with the given target sum." << endl;
//     }
//     return 0;
// }

//USING OPTIMIZATION METHOD - TWO POINTER APPROACH

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairsum(vector<int>& arr,int n, int target){
//     vector<int> ans;
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         int pairsum = arr[i]+arr[j];
//         if(pairsum>target){
//             j--;
//         }else if(pairsum<target){
//             i++;
//         }
//         else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
    
//     vector<int> arr(n);
//     cout << "Enter the elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     int target;
//     cout << "Enter the target sum: ";
//     cin >> target;

//     vector<int> ans = pairsum(arr,n,target);
    
//     if (!ans.empty()) {
//         cout << "Pair with target sum: " << ans[0] << " " << ans[1] << endl;
//     } else {
//         cout << "No pair found with the given target sum." << endl;
//     }

//     return 0;
// }




/// MAJORITY ELEMENTS 

// brute force
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int val:nums){
//             int freq=0;
//             for(int el:nums){
//                 if(val==el){
//                     freq++;
//                 }
//             }
//             if(freq>n/2){
//                 return val;
//             }
//         }
//         return -1;
//     }
// };


// USING SORTING 

// #include<iostream>
// #include<algorithm>

// using namespace std;

// int majorelement(int arr[],int n){
//     sort(arr,arr+n);

//     int freq =1, ans =arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i] == arr[i-1]){
//             freq++;
//         }
//         else{
//             freq = 1;
//             ans = arr[i];
//         } 

//         if(freq>n/2){
//             cout<< ans;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//      majorelement(arr,n);
    


//     return 0;
// }



// by using moore's voting algo




// BUY AND SELL STOCK PROBLEM- solved in leetcode

// maximun container of water -- solved in leetcode

// product of array except self -- brute force to optimal

