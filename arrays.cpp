// /// ARRAYS
// #include<iostream>
// using namespace std;

// // HOLD
// void printArray(int arr[], int size) {

//     cout<< " printing the array " << endl;
//     //print the array
//     for(int i =0; i<size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout<< " printing DONE " << endl;
// }

// int main() {

//     //declare
//     int number[15];

//     //accessing an array
//     cout << "Value at 14 index " << number[14] << endl;

//     //cout << "Value at 20 index " << number[20] << endl;

//     //initialising an array 
//     int second[3] = {5, 7, 11};

//     //accesing an element
//     cout << "Value at 2 index " << second[2] << endl;

//     int third[15] = {2,7};

//     int n = 15;
//     //printArray(third, 15);
//     int thirdSize = sizeof(third)/sizeof(int);
//     cout<<" Size of Third is " << thirdSize <<endl;

//     //initialising all locations with 0
//     int fourth[10] = {0};

//     n = 10;
//     //printArray(fourth, 10);

//     //initialising all locations with 1 [not possible with below line]
//     int fifth[10] = {1};

//     n = 10;
//     //printArray(fifth, 10);

//     int fifthSize = sizeof(fifth)/sizeof(int);
//     cout<<" Size of Fifth is " << fifthSize <<endl;


//     char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
//     cout << ch[3] << endl;

//     cout<< " printing the array " << endl;
//     //print the array
//     for(int i =0; i<5; i++) {
//         cout << ch[i] << " ";
//     }
//     cout<< " printing DONE " << endl;
//     double firstDouble[5];
//     float firstFloat[6];
//     bool firstBool[9];


//     cout << endl << " Everything is Fine " << endl << endl;

//     return 0;
// }


// IN ARRAY WE HAVE TO FIND MAX AND MIN ELEMENT

// #include <iostream>
// using namespace std;

// int getMax(int num[], int n) {
//   int max = 0; 
//   for (int i = 0; i < n; i++) {
//     if (num[i] > max) {
//       max = num[i];
//     }
//   }
//   return max; 
// }
// int getMin(int num[], int n) {
//   int min = num[0]; 
//   for (int i = 0; i < n; i++) {
//     if (num[i] < min) {
//       min = num[i];
//     }
//   }
//   return min; 
// }
// int main(){

//   int size;
//   cin>>size;

//   int num[100];
//   for(int i=0; i<size; i++){
//     cin>>num[i];
//   }

//   cout<<"Max value is :"<<getMax(num,size)<<endl;
//   cout<<"Min value is : "<<getMin(num,size)<<endl;
  
//   return 0;
// }


// PRINT SUM OF THE ARRAY
// #include<iostream>
// using namespace std;

// int main(){
//   int size;
//   cin>>size;
//   int sum =0;
//   int arr[100];
  
//   for(int i=0;i<size;i++){
//     cin>>arr[i];
//   }
//   for(int i=0;i<size;i++){
//     sum = sum + arr[i]; 
//   }
//   cout<<sum;
  
//   return 0;
// }


/// LINEAR SEARCH

// #include<iostream>
// using namespace std;

// bool search(int arr[], int size, int key){
//   for(int i =0;i<size;i++){
//     if(arr[i]==key){
//       return 1;
//     }  
//   }
//   return 0;
// }
// int main(){

//   int arr [10]={2,5,7,-6,8,0,9,1,3,4};

//   cout<<"enter the element to search for:"<<endl;
//   int key;
//   cin>>key;

//   bool found = search(arr,10,key);

//   if(found){
//     cout<<"key is there .. hurray we found!"<<endl;
//   }
//   else{
//     cout<<"key is not there... badd !!"<<endl;
//   }

  
//   return 0;
// }

// REVERSE AN ARRAY

// #include <iostream>
// using namespace std;

// void reverse(int arr[] ,int n){
//   int start = 0;
//   int end = n-1;

//   while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
//   }
// }

// void printArray(int arr[], int n){

//   for(int i =0;i<n;i++){
//   cout << arr[i] <<" ";
//   }
//   cout<<endl;
// }

// int main(){

//   int arr[6] = {1,2,3,4,5,6};
//   int brr[5] = {1,2,3,4,5};
  
//   reverse(arr,6);
//   reverse(brr,5);

//   printArray(arr,6);
//   printArray(brr,5);
    
  
//   return 0;
// }


//// IMP QUES ON ARRAYS

/// SWAP ALTERNATE

// #include<iostream>
// using namespace std;

// void printArray(int arr[], int n){
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
    
//   }
//   cout<<endl;
// }

// void swapArray(int arr[],int size) {
  
//   for(int i=0;i<size;i+=2) {
//     if(i+1 < size){
//       swap(arr[i],arr[i+1]);
//     }
//   }
// }

// int main(){
//   int arr[6] = {1,2,3,4,5,6};

//   swapArray(arr,6);
//   printArray(arr,6);
//   return 0;
// }

//   SWAPPING TWO NUMBERS WITHOUT USING SWAP
// #include<iostream>
// using namespace std;

// void printArray(int arr[], int n){
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
// }

// void swapArray(int arr[],int size) {

//   for(int i=0;i<size;i+=2) {
//     if(i+1 < size){
//       int temp = arr[i+1];
//       arr[i+1] = arr[i];
//       arr[i] = temp;
//     }
//   }
// }

// int main(){
//   int arr[6] = {1,2,3,4,5,6};
//   swapArray(arr,6);
//   printArray(arr,6);
//   return 0;
// }



/// arrays by apna college

// #include<iostream>
// using namespace std;

// int main() {
//     // int arr[5] = {1,2,3,4,5};
//     //double price[] = {99.23,89.22, 78.12};

//     // int arr[size];
//     // cin>>arr[i];

//     // int size = sizeof(arr);
//     // cout<<"Size of array is: "<<size<<endl;

//     int size = 5;
//     int arr[size];

//     for(int i =0;i<size;i++){
//         cin>>arr[i];
//     }
//     int n = sizeof(arr)/sizeof(int);
//     cout<<"Number of elements in array is: "<<n<<endl;

//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }



//     return 0;
// }



// SMALEST AND LARGEST ELEMENT IN ARRAY

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[5] = {-1,-20,30,34,5};
//     int n = sizeof(arr)/sizeof(int);

//     int min = arr[0];
// int max = arr[0];

// for(int i =0;i<n;i++){
// if(arr[i]<max){
//     min = arr[i];
   
//   }
// }
//   cout<<max;
//     return 0;
// }


// #include<iostream>
// #include<algorithm> // Include this header for min and max
// #include<climits>   // Include this header for INT_MAX and INT_MIN
// using namespace std;

// int main() {
//     int arr[] = {-1,-20,30,34,5};
//     int size = sizeof(arr)/sizeof(int);
//     cout << size << endl;

//     int smallest = INT_MAX;
//     int largest  = INT_MIN;

//     for(int i = 0; i < size; i++){
//         smallest = min(arr[i], smallest);
//         largest  = max(arr[i], largest);
//     }
    
//     cout << "Smallest: " << smallest << endl;
//     cout << "Largest: " << largest << endl;

//     return 0;
// }



// PASS BY REFERENCE
// #include<iostream>
// using namespace std;

// void changeArray(int arr[],int size){
//     cout<<"in func\n";
//     for(int i=0;i<size;i++){
//         arr[i]=arr[i]*2;
//     }
// }

// int main() {
//     int arr[] ={1,2,4};
//     changeArray(arr,3);

//     cout<<"in main\n";
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     return 0;
// }




// linear search

// #include<iostream>
// using namespace std;

// int findTarget(int arr[],int n ,int target ){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];

//     cout<<"ENTER THE ARRAY ELEMENTS:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     cout<<findTarget(arr,n,target)<<endl;;

//     return 0;
// }



// REVERSE AN ARRAY USING 2 POINTER APPROACH

// #include<iostream>
// #include<algorithm>
// using namespace std;

// void reverseArray(int arr[] , int n){
//     int start = 0;
//     int end = n-1;

//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// int main() {

//     int n;
//     cin>>n;
//     int arr[n];

//     cout<<"Enter Elements of Array : "<<endl;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     reverseArray(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// removing duplicates print unique value in array
// #include<iostream>
// using namespace std;

// void duplicate(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int j;
//         for( j=0;j<i;j++){
//             if(arr[i]==arr[j]){
//                 break;
//             }
           
//         }
//          if(i==j){
//             cout<<arr[i]<<endl;
            
//         }
//     }
// }

// int main() {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     duplicate(arr,n);
    
//     cout<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int a = 3*3-3/3+3;
//     cout<<a<<endl;
//     return 0;
// }






///                2SUM

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> twosum(int arr[], int n, int tar) {
//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(arr[i] + arr[j] == tar) {
//                 return {i, j}; // returning a vector
//             }
//         }
//     }
//     return {-1, -1}; // returning an invalid pair when no solution is found
// }

// int main() {
//     int arr[5] = {5, 2, 11, 7, 15};
//     int size = 5;
//     int tar = 9;

//     vector<int> result = twosum(arr, size, tar);
//     if(result[0] != -1 && result[1]!=-1) {
//         cout << "Indices: " << result[0] << "," << result[1] << endl;
//     } else {
//         cout << "No pair found!" << endl;
//     }
//     return 0;
// }




// better approach is by 2 pointer approach 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    // Sorting the array along with original indices
    vector<pair<int, int>> sortedArr;
    for (int i = 0; i < arr.size(); i++) {
        sortedArr.push_back({arr[i], i}); // Storing {value, original index}
    }

    sort(sortedArr.begin(), sortedArr.end());

    // Two-pointer approach
    int start = 0, end = sortedArr.size() - 1;
    
    while (start < end) {
        int sum = sortedArr[start].first + sortedArr[end].first;

        if (sum == target) {
            return {sortedArr[start].second, sortedArr[end].second}; // Return original indices
        }
        else if (sum < target) {
            start++;
        }
        else {
            end--;
        }
    }

    return {-1, -1}; // If no pair found
}

int main() {
    vector<int> arr = {5, 2, 11, 7, 15};
    int target = 9;

    vector<int> result = twoSum(arr, target);
    if (result[0] != -1) {
        cout << "Indices: " << result[0] << "," << result[1] << endl;
    } else {
        cout << "No pair found!" << endl;
    }

    return 0;
}
