#include<iostream>
using namespace std;

int main() {
     int a = 4;
     int b = 8;

     int x = a&b;
     cout<<x<<endl;  // and
     int y = a|b;
     cout<<y<<endl;      // or

     int z = a^b;
     cout<<z<<endl;  // xor

     cout<<(4<<1)<<endl; // left shift a<<b ie. ans = a*2^b
     cout<<(10<<2)<<endl;

     cout<<(10>>2)<<endl; // right shift a>>b ie. ans = a/2*b
     cout<<(8>>2)<<endl; 

    return 0;
}


// global and local scope 

//data type identifiers

#include<iostream>
using namespace std;

int main() {
    cout<< sizeof(int) <<endl;
    cout<< sizeof(long int) <<endl;
    cout<< sizeof(short int) <<endl;
    cout<< sizeof(long long) <<endl;
    return 0;
}