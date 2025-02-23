// #include<iostream>
// using namespace std;

// void printNum(int n){

//    if(n==1){
//     cout<<1<<" ";
//     return;
//    }
//     cout<<n<<" ";
//     printNum(n-1);
// }
// int main() {
//     int n = 5;
//     printNum(n);

//     return 0;
// }



//    SUM OF N NUMBERS

// #include<iostream>
// using namespace std;

// int sum(int n){

//     if(n==1){
//         return 1;
//     }
//     return n + sum(n-1);
// }

// int main() {

//     cout<<sum(3);
    
//     return 0;
// }


// Fibonacci Series

// #include<iostream>
// using namespace std;

// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibonacci(n-1)+fibonacci(n-2);
// }
// int main() {
    
//     cout<<fibonacci(3)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int ifSorted(int arr[],int n){
//     if(n==0 || n==1)
//     return true;

// return (arr[n-1]>= arr[n-2] && ifSorted(arr,n-1));
// }


// int main() {
//    int arr[5] = { 5,2,8,1,3};

//    cout<<ifSorted(arr,5)<<endl; 
    
//     return 0;
// }



// PRINT ALL SUBSETS

// #include<iostream>
// #include<vector>
// using namespace std;

// void subset(vector<int> &arr,vector<int> &ans, int i){
//     if(i==arr.size()) {
//         for(int val:ans){
//             cout<<val<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     // include
//     ans.push_back(arr[i]);
//     subset(arr,ans,i+1);

//     ans.pop_back();  // backtrack

//     //exclude
//     subset(arr,ans,i+1); 
// }
// using namespace std;

// int main() {
//     vector<int> arr = {1,2,3,4};
//     vector<int> ans;

//     subset(arr,ans,0);
    
//     return 0;
// }
