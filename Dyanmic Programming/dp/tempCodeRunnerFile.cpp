#include<iostream>
// #include<vector>
// #include<climits>

// using namespace std;

// int solveRec(vector<int> &arr,int x){

//     if(x==0) return 0;

//     if(x<0) return INT_MAX;

//     int mini = INT_MAX;
//     for(int i=0;i<arr.size();i++){
//         int ans = solveRec(arr,x-arr[i]);

//         if(ans!=INT_MAX) {
//             mini = min(mini,1+ans);
//         }
//     }
//     return mini;


// }


// int main() {

//     vector<int> arr={2,3,4};
//     int x = 13;

//     int res = solveRec(arr,x);

//     cout<<res;

    
//     return 0;
// }