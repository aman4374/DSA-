// calculate 2^n

// #include<iostream>
// #include<cmath>

// using namespace std;

// int solve(int n){
//     if(n==0){
//         return 1;
//     }
//     return 2*solve(n-1);
    
// }

// int main() {
//     int n;
//     cin>>n;

//     int ans = solve(n);

//     cout<<ans<<" ";
    
//     return 0;
// }


// FACTORIAL

// #include<iostream>
// using namespace std;

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return fact(n-1)*n;
// }

// int main() {
//     int n;
//     cin>>n;

//     int ans = fact(n);
//     cout<<ans<<"";


//     return 0;
// }



// print count let n=5 then print 5,4,3,2,1
// #include<iostream>
// using namespace std;

// void print(int n){

//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     print(n-1);

// }

// int main() {
//     int n;
//     cin>>n;

//     print(n);
//     return 0;
// }



// #include<iostream>
// using namespace std;

// void reachhome(int src,int dest){
//     cout<<"source: "<<src<<" destination: "<<dest<<endl;

//     if(src == dest) {
//         cout<<"reached home"<<endl;
//         return;
//     }
//     //src++;
//     return reachhome(++src,dest);
// }

// int main() {
//     int src = 1;
//     int dest = 10;

//      cout<<endl;

//     reachhome(src,dest);

//     return 0;
// }


// finonacci series

// #include<iostream>
// using namespace std;

// int fibonacci(int n){

//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     return fibonacci(n-1)+fibonacci(n-2);

// }

// int main() {

//     int n;
//     cin>>n;

//     int ans =fibonacci(n);
//     cout<<ans;

    
//     return 0;
// }



// say digits 

// #include<iostream>
// using namespace std;

// void sayDigits(int n,string arr[10]){
//     if(n==0){
//         return;
//     }

//     int digit = n%10;
//     n = n/10;

//     sayDigits(n,arr);

//     cout<<arr[digit]<< " ";
// }

// int main() {
//     int n;
//     cin>>n;

//     string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

//     sayDigits(n,arr);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// bool isSorted(int arr[],int size){

//     // base case
//     if(size == 0 || size == 1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//         bool ans = isSorted(arr+1,size-1);
//     }
// }

// int main() {
//     int arr[5] = {0,1,2,3,4};
//     int size = 5;

//     bool ans = isSorted(arr,size);

//     if(ans){
//         cout<<"Array is sorted";
//     }
//     else{
//         cout<<"Array not sorted";
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int getsum(int arr[],int size ){
    

//     if(size == 0){
//         return 0;
//     }

//     if(size == 1){
//         return arr[0];
//     }
    
//         return arr[0] + getsum(arr+1,size-1);
//     }
    

// int main() {
//     int arr[5] = {1,4,3,9,2};
//     int size = 5;

//     int sum = getsum(arr,size);
//     cout<<sum<<" ";

//     return 0;
// }


// #include<iostream>
// using namespace std;

// void printArray(int arr[],int n){

//     cout<<"Size of array: "<< n <<endl;

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }

// bool linearSearch(int arr[],int size,int k){
//     printArray(arr,size);
//     if(size == 0){
//         return 0;
//     }
//     if(arr[0] == k){
//         return arr[0];
//     }
//     return linearSearch(arr+1,size-1,k);
// }

// int main() {
//     int arr[6] = {3,5,11,1,6,4};
//     int size = 6;
//     int key=2;

//     int ans = linearSearch(arr,size,key);

//     if(ans){
//         cout<<"KEY FOUND!";
//     }
//     else{
//         cout<<"Key not found";
//     }

//     return 0;
// }



// binary search using recursion


// #include<iostream>
// using namespace std;

// void printArray(int arr[],int s, int e){
//     for(int i=s;i<e;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }

// bool binarySearch(int arr[],int s,int e,int k){

//     printArray(arr,s,e);

//     if(s>e){
//         return false;
//     }

//     int mid = s+(e-s)/2;

//     if(arr[mid] == k){
//         return true;
//     }

//     if(arr[mid]<k){
//         return binarySearch(arr,mid+1,e,k);
//     }
//     else{
//         return binarySearch(arr,s,mid-1,k);
//     }
// }

// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;
//     int key = 4;

//     int ans = binarySearch(arr,0,5,key);

//     if(ans){
//         cout<<"key found";
//     }
//     else{
//         cout<<"key not found";
//     }

//     return 0;
// }



//  recursion with strings

//  reverse a string

// #include<iostream>
// using namespace std;

// void reverse(string& str ,int i, int j){

//     cout<<"Call recieved for string is: "<<str<<endl;

//     if(i>j){
//         return ;
//     }

//     swap(str[i],str[j]);
//     i++;
//     j--;

//     reverse(str,i,j);
// }

// int main() {
//     string str = "amantrivedi";

//     cout<<endl;

//     reverse(str,0,str.length()-1);
//     cout<<str;

//     return 0;
// }



// VALID PALINDROME

// #include <iostream>
// using namespace std;

// void palindrome(string str, int i, int j) {
//     while (i < j) {
//         if (str[i] != str[j]) {  // If characters mismatch, print and return
//             cout << "Not a Palindrome" << endl;
//             return;
//         }
//         i++;
//         j--;
//     }
//     cout << "Valid Palindrome" << endl; // Print once if palindrome
// }

// int main() {
//     string str = "naman";
//     palindrome(str, 0, str.length() - 1);
//     return 0;
// }



// using recursion

// #include<iostream>
// using namespace std;

// bool checkPal(string str , int i , int j){

//     // base case
//     if(i>j){
//         return true;
//     }
//     if(str[i]!=str[j]){
//         return false;
//     }
//     else{
//         i++;
//         j--;
//         return checkPal(str,i,j);
//     }
// }

// int main() {
//     string str = "naman";

//     bool ans = checkPal(str,0,str.length()-1);
//     if(ans){
//         cout<<"Valid Pal";
//     }
//     else{
//         cout<<"Not a Valid Pal";
//     }

//     return 0;
// }


// calculate a power b

// #include<iostream>
// using namespace std;

// int power(int a,int b){

//     // base case
//     if(b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }

//     long long int ans = power(a,b/2);

//     if(b%2 == 0){  // if b is even
//         return ans*ans;
//     }
//     else{
//         return a*ans*ans;
//     }

// }

// int main() {
//     int a,b;
//     cin>>a>>b;

//     int ans = power(a,b);
//     cout<<"Ans is : "<<ans <<endl;

//     return 0;
// }


//  BUBBLE SORT


// #include<iostream>
// using namespace std;

// void buubleSort(int arr[],int n){

//     // base case
//     if(n==0 || n==1){
//         return ;
//     }

//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     buubleSort(arr,n-1);
// }

// int main() {

//     int arr[5] = {2,1,7,4,3};
//     int n = 5;

//     buubleSort(arr,n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }



//     MERGE SORT

#include<iostream>
using namespace std;

void merge(int *arr,int s , int e){
    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex= s;

    // copy values
    for(int i=0;i<len1;i++){
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }

        while(index1<len1){
            arr[mainArrayIndex++] = first[index1++];
        }

        while(index2<len2){
            arr[mainArrayIndex++] = second[index2++];
        }
    }

}

void mergerSort(int *arr , int s, int e){

    if(s>=e){
        return;
    }

    int mid = s+(e-s)/2;

    //go to left part
    mergerSort(arr,s,mid);

    // go to right part
    mergerSort(arr,mid+1,e);

    // merge two sorted array
    merge(arr,s,e);
}

int main() {
    int arr[6] = {7,2,1,4,6,0};
    int n = 6;

    mergerSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}