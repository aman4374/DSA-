// BUBBLE SORT 

// #include<iostream>
// #include<algorithm>
// using namespace std;

// void bubblesort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

// void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++){
//             cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//     }

// int main() {
//     int n ;
//     cin>>n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     bubblesort(arr,n);
//     printArray(arr,n);

//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;

void selesctionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
       }
       cout<<endl;
    }

int main() {
    int n ;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selesctionsort(arr,n);
    printArray(arr,n);

    return 0;
}