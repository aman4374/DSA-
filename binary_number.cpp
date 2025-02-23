// decimal to binary
// #include<iostream>
// using namespace std;

// int decTObin(int decNum){
//     int ans = 0;
//     int pow = 1; // 10^0

//     while(decNum>0){
//         int rem = decNum % 2;
//         decNum = decNum/2;

//         ans = ans + rem*pow;
//         pow = pow*10;
//     }
//     return ans;
// }

// int main() {
//     int decNum ;
//     cin>>decNum;
//     cout<<decTObin(decNum);
    
//     return 0;
// }


// binary to decimal

#include<iostream>
using namespace std;

int binTOdec( int binNum){
    int ans = 0;
    int pow = 1; // 2^0

    while(binNum>0){
        int rem = binNum % 2;
        ans += rem*pow;

        binNum /=10;
        pow *= 2;    
    }
    return ans;
}
int main() {
    int binNum ;
    cin>>binNum;
    cout<<binTOdec(binNum);
    return 0;
}