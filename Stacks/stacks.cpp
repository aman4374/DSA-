// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {

//     //creating a stack
//     stack<int> s;

//     s.push(2);
//     s.push(23);
//     s.pop();
//     cout<<s.top()<<endl;
//     // cout<<s.empty()<<endl;

//     if(s.empty()) {
//         cout<<"Stack is empty"<<endl;
//     } else {
//         cout<<"Stack is not empty"<<endl;
//     }

//     cout<<"Size of stack is: "<<s.size()<<endl;

//     s.pop();
//     if(s.empty()) {
//         cout<<"Stack is empty"<<endl;
//     } else {
//         cout<<"Stack is not empty"<<endl;
//     }

    
//     return 0;
// }



// implementaion of stack without stl lib

// #include<iostream>
// using namespace std;

// class Stack{

//     public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int size) {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }
//     void push(int x) {
//         if(size-top>1) {
//             top++;
//             arr[top] = x;
//         }
//         else{
//             cout<<"Stack is full Overflow!!"<<endl;
//         }
//     }

//     void pop() {
//         if(top >=0) {
//             top--;
//         }
//         else{
//             cout<<"Stack is underflow"<<endl;
//         }
//     }

//     int peek() {
//         if(top == -1) {
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//         return arr[top];
//     }

//     bool isEmpty() {
//         if(top == -1) {
//             return true;
//         }
//         else{
//             return false;
//         }

//     }
// };


// int main() {

//     Stack s(5);

//     s.push(2);
//     s.push(23);
//     s.pop();

//     cout<<s.peek()<<endl;

//     if(s.isEmpty()) {
//         cout<<"Stack is empty"<<endl;
//     } else {
//         cout<<"Stack is not empty"<<endl;
//     }

    
//     return 0;
// }


// two stacks in one array

// #include<iostream>
// using namespace std;

// class TwoStack{
//     int *arr;
//     int top1;
//     int top2;
//     int size;

//     public:
//     // initializing TwoStack
//     TwoStack(int n) {
//         this->size = n;
//         arr = new int[n];
//         top1 = -1;
//         top2 = n;
//     }

//     // push element in stack1
//     void push1(int num){
//         // at least one empty space available
//         if(top2-top1>1){
//             top1++;
//             arr[top1] = num;
//         }
//         else{
//             cout<<"Stack Overflown"<<endl;
//         }
//     }

//     // push element in stack2
//     void push2(int num){
//         // at least one empty space available
//         if(top2-top1>1){
//             top2--;
//             arr[top2] = num;
//         }
//         else{
//             cout<<"Stack Overflown"<<endl;
//         }
//     }

//     int pop1(){
//         if(top1>=0){
//             int x = arr[top1];
//             top1--;
//             return x;
//         }
//         else{
//             cout<<"Stack Underflow"<<endl;
//             return -1;
//         }
//     }

//     int pop2(){
//         if(top2<size){
//             int x = arr[top2];
//             top2++;
//             return x;
//         }
//         else{
//             cout<<"Stack Underflow"<<endl;
//             return -1;
//         }
//     }
// };

// int main() {
    
//     return 0;
// }


////               QUES ON STACKS        \\\\\\
