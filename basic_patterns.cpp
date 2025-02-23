// #include <iostream>
// using namespace std;

// int main() {
//   int a, b;
//   cin >> a >> b;
//   // a = cin.get();
//   cout<<"Value of a and b is "<<a<<" "<<b<<endl;
//   // cout << "value of a is " << a << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i=1;

//   while(i<=n){
//     cout<<i<<" ";
//     i+=1;
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;

//   int i=1;
//   int sum = 0;
//   while(i<=n){
//     sum = sum + i;
//     i=i+1;
//   }

//   cout<<"Value of sum is "<<sum<<endl;
//   return 0;
// }

// sum of all even numbers
// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i;
//   int sum=0;

//   for(i=0;i<n;i+=2){
//     sum = sum + i;
//   }
//   cout<<"Value of sum is "<<sum<<endl;
//   return 0;
// }

// Prime or not
// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int i;
//   for(i=2;i<n;i++){
//     if(n%i==0)
//       cout<<"Not a prime number for:"<<i<<endl;
//     else
//       cout<<"Prime number for:"<<i<<endl;
//   }
//   return 0;
// }


// PATTERNS
// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
  
//   int i=1;
//   while(i<=n){
//     int j=1;
//     while(j<=n){
//       cout<<"*";
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

// #include <iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   while(i<=n){
//     int j=1;
//     while(j<=n){
//       cout<<i;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     while(j<=n){
//       cout<<j;
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     while(j<=n){
//       cout<<n-j+1;;
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
  
//   int i=1;
//   int count =1;
//   while(i<=n){
//   int j=1;
//     while(j<=n){
//       cout<<count<<" ";
//       count++;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
  
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
    
//     int i =1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             // cout<<j;
//             cout<<n-j+1;
//             j++;     
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     int i=1;
//     int count =1;

//     while(i<=n){
//         int j=1;
//         while(j<=n){ 
//             cout<<count<<"   ";
//             count++;
//             j++;
//     }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col<=row){
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int col = 1;
//         while(col<=row){
//             cout<<row;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int row =1;
//     int cnt =1;
   
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<cnt<<" ";
//             cnt++;
//             col++;
//         }
//         cout<<endl;
//         row++;
        
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int row =1;
    
//     while(row<=n){
//         int col = 1;
//         int value = row;
//         while(col<=row){
//             cout<<value<<" ";
//             value++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// 2nd method

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){
//         int col = 1;
//         while(col<=row){
//             cout<<row-col+1<<"   ";
//             col++;
//         }
//         cout<<endl;
//         row++;     
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         int col=1;
//         char ch = 'A'+ row-1;
//         while(col<=n){
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     char cnt='A';
//     while(row<=n){
//         int col=1;
//         char ch = 'A'+ row-1;
//         while(col<=n){
//             cout<<cnt<<" ";
//             cnt++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     char start ='A';

//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col<=n){
//             cout<<start<<" ";
//             start++;
//             col++;
            
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col<=n){
//             char ch = 'A'+row+col-2;
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }  
//     return 0;
// }

/// TRIANGULAR PATTERN
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
    

//     int row = 1;
//     while(row<=n){
//         char ch = 'A'+row-1;
//         int col = 1;
//         while(col<=row){
//             cout<<ch;
            
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;


// int main() {
//    int n;
//     cin>>n;

//     int row =1 ;
//     while(row<=n){
//         int col = 1;
//         while(col<=row){
//             char ch = 'A'+row-1;
//             ch++;
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     } 
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         char value='A';
//         int col = 1;
//         while(col<=row){
//             cout<<value;
//             value++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col<=row){
//             char ch = 'A'+row+col-2;
//             cout<<ch;
//             ch++;
//             col++;
//         }
//            cout<<endl;
//             row++;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         char start = 'A'+n-row;
//         int col = 1;
//         while(col<=row){
//             cout<<start;
//             start++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         char start = 'A'+n-row;
//         int col = 1;
//         while(col<=n){
//             cout<<start;
//             start++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col<=n){
//             char start = 'A'+n-row-1;   // incomplete still have to complete.
//             cout<<start;
//             start++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int space = n-row;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int col =1;
//         while(col<=row){
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col =1;
//         int star = n-row;        /// complet it
//         while(col<=row){
//             cout<<star;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// IMP QUES
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row =1 ;
//     while(row<=n){

//         // Print the first triangle
//         int space = n-row;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         // then print 2nd triangle
//         int j = 1;
//         while(j<=row){
//             cout<<j;
//             j++;
//         }


//         //then print third triangle
//         int start = row-1;
//         while(start){
//             cout<<start;
//             start--;
//         }

//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
  // int n;
  // cin>>n;

  // int row = 1;
  // while(row<=n){
  //   // print the first triangle
  //   int first = n-row+1;
  //   int j =1;
  //   while(j<=row){
  //     cout<<first;
  //     first++;
  //     j++;
  //   }
  //   // print the second triangle
    
    
  //   //print the third triangle

  //   cout<<endl;
  //   row++;
  // }

//   int n;
//   cin >> n;

//   for (int row = 0; row < n; row++) {
//     for (int i = 1; i <= n - row; i++) {
//       cout << i << " ";
//     }

//     for (int j = 0; j < 2 * row; j++) {
//       cout << "*" << " ";
//     }

//     for (int k = n - row; k >= 1; k--) {
//       cout << k << " ";
//     }
//     cout << endl;    
//   }
//   return 0;

  
// }







////     FROM APNA COLLEGE



///           SQUARE PATTERNS           \\\

// #include <iostream>
// using namespace std;
// int main(){

//   int n;
//   cout<<"Enter n:"<<endl;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }

//   return 0;
//}


// #include <iostream>
// using namespace std;
// int main(){

//   int n;
//   cout<<"Enter n:"<<endl;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     char ch='A';
//     for(int j=0;j<n;j++){
//       cout<<ch<<" ";
//       ch++;
//     }
//     cout<<endl;
//   }

//   return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){

//   int n;
//   cout<<"Enter n:"<<endl;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
      
//     }
//     cout<<endl;
//   }

//   return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){

//   int n;
//   int num =1;

//   cout<<"Enter n:"<<endl;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cout<<num <<"  ";
//       num++;
//     }
//     cout<<endl;
//   }

//   return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){

//   int n;
//   char ch ='A';
//   cout<<"Enter n:"<<endl;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cout<<ch<<" ";
//       ch++;
//     }
//     cout<<endl;
//   }
//   return 0;
// }





///          TRIANGLE PATTERNS        \\\

// #include <iostream>
// using namespace std;

// int main(){

//   int n;
//   cout<<"Enter n:"<<endl;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//       // Your code here
//       cout<<"*"<<" ";
//     }
//     cout<<endl;
//   }

//   return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){

//   int n;
//   cout<<"Enter n:"<<endl;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//       // Your code here
//       cout<<i+1<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){

//   int n;
//   int num=1;
//   cout<<"Enter n:"<<endl;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//       // Your code here
//       cout<<num<<" ";
//       num++;
      
//     }
//     cout<<endl;
//   }

//   return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){

//   int n;
//   int num=1;
//   cout<<"Enter n:"<<endl;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     for(int j=i+1;j>0;j--){
//       // Your code here
//       cout<<num<<" ";
//       num++;
      
//     }
//     cout<<endl;
//   }

//   return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){

//   int n;
//   cout<<"Enter n:"<<endl;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     //spaces -- n-i-1
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
//     }
//     // nums1 -- i+1
//     for(int j=1;j<=i+1;j++){
//       cout<<j;
//     }
//     //nums2
//     for(int j=i;j>0;j--){
//       cout<<j;
//     }
//     cout<<endl;
//   }

//   return 0;
// }





