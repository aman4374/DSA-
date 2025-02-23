// Prime number
// #include<iostream>
// using namespace std;

// string isPrime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i == 0){
//             return "Not Prime";
//         }
//     }
//     return "Prime";
// }
// int main() {
//     int n = 17;

//     cout<<isPrime(n)<<endl;
//     return 0;
// }


// check prime number in range 1 to N  : using Sieve of Eratosthenes
// solved in leetcode
// #include<iostream>
// using namespace std;

// int main() {
    
//     return 0;
// }


// digits in a number

// #include<iostream>
// #include<cmath>
// using namespace std;

// void printdigits(int n){
//     while(n!=0){
//         int digit = n%10;
//         cout<<digit<<" ";
//         n=n/10;

//     }
// }

// int main() {
//     int n = 2345;
//     printdigits(n);
//     cout<<endl;
//     cout << (int)(log10(n)+1) << endl;

//     return 0;
// }


// armstrong number : sum of all cubes of the each digit eg: 153= 1^3 + 5^3 + 3^3.

// #include<iostream>
// using namespace std;

// bool isArmstrong(int n){
//     int copyN = n;
//     int sumofcubes = 0;

//     while(n!=0){
//     int digit = n%10;
//     sumofcubes += (digit*digit*digit);
//     n=n/10;
//     }
//     return sumofcubes == copyN;
// }
// int main() {

//     int n = 153;
//     if(isArmstrong(n)){
//         cout<<"Yes , Armstrong number!";
//     }
//     else{
//         cout<<"Not an Armstrong number!";
//     }
//     return 0;
// }


// GCD/ HCF


// // TC: O(a+b);
// #include<iostream>
// using namespace std;
// int gcdno(int a , int b){
//     int gcd = 1;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i == 0 && b%i==0){
//             gcd = i;
//         }
//     }
//     return gcd;
// }
// int main() {
//     int a = 20;
//     int b = 25;
//     cout<<gcdno(a,b)<<" ";
//     return 0;
// }


// USING EUCLID'S ALGORITHM

// #include<iostream>
// using namespace std;

// int gcd(int a,int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a = a%b;
//         }else{
//             b = b%a;
//         }
//     }
//     if(a == 0 ) return b;
//     else return a;
// }
// int main() {
//     cout<<gcd(20 ,28) <<endl;
//     return 0;
// }


// LCM OF TWO NUMBERS

// #include<iostream>
// using namespace std;

// int gcd(int a,int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a = a%b;
//         }else{
//             b = b%a;
//         }
//     }
//     if(a == 0 ) return b;
//     else return a;
// }
// int main() {
//     int a = 20 ,b=28;
//     cout<<gcd(a,b) <<endl;

//     int lcm = a*b / gcd(a,b);

//     cout<<lcm<<" ";
//     return 0;
// }


// REVERSE A NUMBER

