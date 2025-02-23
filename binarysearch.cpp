// #include<iostream>
// #include<vector>
// using namespace std;

// int binarysearch(vector<int> arr, int target){ // iterative code
//     int st=0;
//     int end=arr.size()-1;
//     while(st<=end){
//         int mid = st+((end-st)/2);
//         if(arr[mid] == target){
//         return mid;
//         }
//         else if(arr[mid]>target){
//         end=mid-1;
//         }
//         else{
//         st=mid+1;
//         }
//     }
//     return -1;
// }
// int main() {
    // vector<int> arr1 = {1,2,3,4,5,6,7,8};// even
    // int target1 = 7;
    // cout<<binarysearch(arr1,target1)<<endl;
    
    // vector<int> arr2 = {1,2,3,4,5,6,7}; //odd
    // int target2 = 8;
    // cout<<binarysearch(arr2,target2)<<endl;

//     return 0;
// }


// using recursive approach

#include<iostream>
#include<vector>
using namespace std;

int recbinarysearch(vector<int> arr,int target,int st , int end){
    
    if(st<=end){
        int mid = st+((end-st)/2);
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]>target){
            return recbinarysearch(arr,target,st,mid-1);
        }
        else{
            return recbinarysearch(arr,target,mid+1,end);
        }
    }
    return -1;
}

int main() {
 
    vector<int> arr1 = {1,2,3,4,5,6,7,8};// even
    int target1 = 7;
    int st = 0;
    int end= arr1.size()-1;
    cout<<recbinarysearch(arr1,target1,st,end)<<endl;
    
    // vector<int> arr2 = {1,2,3,4,5,6,7}; //odd
    // int target2 = 8;
    // cout<<recbinarysearch(arr2,target2)<<endl;

    return 0;
}