// #include<iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     cout<<&a<<endl;
//     cout<<*(&a)<<endl;  // DEREFERENCE- GIVE THE VALUE STORED AT ADDRESS

//     int* ptr = &a;
//     cout<<*(ptr)<<endl; // same as the  cout<<*(&a)<<end
//     cout<<ptr<<endl;
//     cout<<&ptr<<endl;

//     int** ptr2 = &ptr;
//     cout<<ptr2<<endl;
//     cout<<&ptr2<<endl;
//     cout<<*(ptr2)<<endl;
//     cout<<**(ptr2)<<endl;

//     return 0;
// }




// NULL POINTER

// #include<iostream>
// using namespace std;

// int main() {
//     int* ptr = NULL;
//     cout<<ptr<<endl;
//     return 0;
// }



// predict the output
// #include<iostream>
// using namespace std;

// int main() {
//     int a =5;
//     int *p = &a;
//     int **q=&p;

//     cout<<*p<<endl;
//     cout<<**q<<endl;
//     cout<<p<<endl;
//     cout<<*q<<endl;
//     return 0;
// }


// pass by reference

// pass by value
// #include<iostream>
// using namespace std;

// void change(int a){  // pass by values
//     a=20;
// }
// int main() {
//     int a = 10;

//     change(a);
//     cout<<"inside the main function: "<<a;// 10 no change
//     return 0;
// }

// pass by pointer and pass by reference

// #include<iostream>
// using namespace std;

// void change(int* ptr){ // pass by pointer
//     *ptr = 20;
// }

// int main() {
//     int a = 10;
//     change(&a);

//     cout<<"inside main func : "<<a<<endl; // value changes
//     return 0;
// }


// pass by references
// #include<iostream>
// using namespace std;

//     void change(int &b){  // pass by reference(alias)
//         b=20;
//     }
// int main() {
//     int a =10;
//     change(a);

//     cout<<"inside main func : "<<a<<endl;
//     return 0;
// }


// array pointers
// array is a constant pointer which remains same throughout


// #include<iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1,2,3,4,5};
//     cout<<arr<<endl;
//     cout<<*arr<<endl;
//     return 0;
// }


// pointers arithmetic
