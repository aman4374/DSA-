// #include<iostream>
// using namespace std;

// int main() {
//     string str1 = "aman";
//     string str2 = "trivedi";;
//     string str3 = str1+str2;

//     cout<<str3<<endl;
//     cout<<(str1==str2)<<endl;
//     cout<<(str1>str2)<<endl;  // in string we have lexographical or dictionary based arrangement
//     cout<<str1.length()<<" "<<str2.length()<<" "<<str3.length()<<endl;
    
//     string str;
//     //cin>>str;
//     getline(cin,str);

//     cout<<"output: "<<str<<endl;

//     string str4 = "HI I AM AMAN TRIVEDI";

//     for(int i=0;i<str4.length();i++){
//         cout<<str4[i]<<" ";
//     }
//     cout<<endl;

//     for(char ch:str4){
//         cout<<ch<<" ";
//     }
//     cout<<endl;


//     return 0;
// }




// REVERSE A STRING

// with char array : solved on leetcode

// with strings

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string str = "aman";

    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}

// remove all occrences solved on leetcode
