// #include<iostream>
// using namespace std;

// int sum(int a , int b){
//     int s = a+b;
//     return s;
// }

// int main() {

//     cout<<"sum is :" << sum(2,3)<<endl;
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int sum(int N){
//     int sum = 0;
//     for(int i=0;i<N;i++){
//         sum=sum+i ;
//     }
//     return sum;

// }

// int main() {
    
//     cout<<"sum is:"<<sum(50);
//     return 0;
// }


/// PASS BY VALUE:: COPY OF THE ARGUMENT IS PASSED TO FUNCTION
// #include<iostream>
// using namespace std;

// int sum(int a , int b){

//     a=a+10;
//     b=b+10;
//     return a+b;
// }

// int main() {

//     int a=5;
//     int b=3;
    
//     cout<<"sum is:"<<sum(a,b)<<endl;

//     cout<<"a is:"<<a<<endl;
//     cout<<"b is:"<<b<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// void changeX(int x){
//     x=2*x;
//     cout<<"X is :"<<x<<endl;
// }

// int main() {
//     int x=5;
//     changeX(x);

//     cout<<"X is :"<<x<<endl;
//     return 0;
// }