// ARRAY STL
// #include<iostream>
// #include<array>

// using namespace std;
// int main(){

//   array<int,4> a = {1,2,3,4};
//   int size = a.size();

//   for(int i=0;i<size;i++){
//     cout<<a[i]<<" "<<endl;
//   }
//   cout<<"Element at 2nd index is : "<<a.at(2)<<endl;
//   cout<<"Check empty or not : "<<a.empty()<<endl;
//   cout<<"First element is : "<< a.front()<<endl;
//   cout<<"Last element is : "<<a.back()<<endl;
  
//   return 0;
// }

//Yuganshu STL Class
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   vector<int> v(5);
//   for (int i = 0; i < 5; i++) {
//     cin >> v[i];
//   }

//   // cout << v[2] << endl;

//   vector<int>::iterator iter = v.begin();

//   auto iter2 = next(iter, 3);
//   cout << *iter2 << endl;

//   vector<int> v = {10, 2, 328, 2893, 2};


//   for (auto i: v) {
//     cout << typeid(i).name() << endl;
//     break;
//   }
//   for (int i: v) {
//     i = i + 2;
//   }
//   for (int i: v) cout << i << " ";
//   cout << endl;
//   for (int i = 0; i < v.size(); i++) {
//     v[i] = v[i] + 2;
//   }
//   for (int i: v) cout << i << " ";

//   cout << endl;
//   for (int& i: v) {
//     i = i + 2;
//   }

//   for (int i: v) cout << i << " ";
  

//   vector<vector<int>> v2 = 

//   {
//   {1, 2, 3, 4, 5},
//   {1, 2, 3, 4, 5},
//   {1, 2, 3, 4, 5},
//   {1, 2, 3, 4, 5},
//   };

//   // for (int i = 0; i < 4; i++) {
//   //   for (int j = 0; j < 5; j++) {
//   //     cout << v2[i][j] << " ";
//   //   }
//   //   cout << endl;
//   // }

  
//   for (auto i: v2) {

//   cout << typeid(i).name();
//     break;
    
//     // for (auto j: i) {
//     //   cout << j << " ";
//     // }
//     // cout << endl;
//   }
//   unordered_map <char, int> mp;
  
//   mp['a'] = 1;
//   mp['b'] = 2;
//   mp['c'] = 3;

//   for (pair<char, int> i: mp) {
//     cout << i.first << " " << i.second << endl;
//   }

//   for (auto i: mp) {
//     cout << i.first << i.second << endl;
//   }

  
//   return 0;
// }

//VECTOR STL ... Vector is a dynamic array which can be resized at run time
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//   vector <int> v;
//   cout<<"Capacity : "<<v.capacity()<<endl;

//   v.push_back(2);
//   cout<<"Capacity : "<<v.capacity()<<endl;

//   v.push_back(3);
//   cout<<"Capacity : "<<v.capacity()<<endl;

//   v.push_back(4);
//   cout<<"Capacity : "<<v.capacity()<<endl;
//   cout<<"Size : "<<v.size()<<endl;

//   cout<<"Element at 2nd index is : "<<v.at(2)<<" or "<<v[2]<<endl;

//   cout<<"Front Element: "<<v.front()<<endl;
//   cout<<"Back Element: "<<v.back()<<endl;

//   cout<<"Before pop"<<endl;
//   for(int i:v){
//     cout<<i<<" ";
//   } cout<<endl;

//   v.pop_back();

//   cout<<"After pop"<<endl;
//   for(int i:v){
//     cout<<i<<" ";
//   }cout<<endl;

//   cout<<"Before clear size is : "<<v.size()<<endl;
//   v.clear();
//   cout<<"After clear size is : "<<v.size()<<endl;

//   //if we already know the size of vector then we can create it like this
//   vector<int> a(5,1);
//   a.erase(a.begin()+2);// We can pass a range to delete like vec.erase(start,begin) -> [start,end) 
//   a.insert(a.begin()+2,100);// insert use to pass any value at any position
//   cout<<"printing a: "<<endl;
//   for(int i:a){
//     cout<<i<<" ";
//   }cout<<endl;
  
//   vector<int> last(a);
//   cout<<"printing the copy of a :"<<endl;
//   for(int i:last){
//     cout<<i<<" ";
//   }
  
//   return 0;
// }

// VECTOR ITERATORS: vec.begin() , vec.end(), rbegin and rend
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//   vector<int> vec = {1,2,3,4,5};
  
//   vector<int> :: iterator it; // this can be replaed with auto

//   for(it = vec.begin();it!= vec.end();it++){
//     cout<< *(it) << " ";
//   }
//   cout<<endl;

//   for(auto it=vec.rbegin();it!=vec.rend();it++){
//     cout<<*(it) <<" ";
//   }
  
//   return 0;
// }


// imp point : listimplement as DLL and Deque as DOUBLE ENDED QUEUE internally is implement using dynamic arrays so random access of element is possible in cases deque while in case of list it is not possible
// Deque STL  can be implemented as a Double Ended Queue

// #include<iostream>
// #include<deque>
// using namespace std;

// int main(){

//   deque <int> d;
//   d.push_back(2);
//   d.push_front(1);

//   for(int i:d){
//     cout<<i<<" ";
//   }cout<<endl;
  
//   d.pop_back();
//   for(int i:d){
//     cout<<i<<" ";
//   }cout<<endl;

//   d.push_back(4);

//   cout<<"Element at zeroth index is : "<<d.at(0)<<endl;

//   cout<<"Empty or not : "<<d.empty()<<endl;

//   cout<<"Before Erase : "<<d.size()<<endl;
//   d.erase(d.begin(),d.begin()+1);
//   cout<<"After Erase : "<<d.size()<<endl;

//   for(int i:d){
//     cout<<i<<"";
//   }cout<<endl;
  
//   return 0;
// }


// LIST STL  implemented as a Doubly Linked Lists

// #include <iostream>
// #include <vector>
// #include <list>

// using namespace std;

// int main() {
//     list<int> l;
//     l.push_back(2);
//     l.push_front(1);

//     // Printing the list
//     for (int i : l) {
//         cout << i << " ";
//     }
//     cout << endl;

//     // Erase the first element safely
//     auto it = l.begin(); // Getting iterator to the first element
//     if (it != l.end()) { // Ensure the list is not empty before erasing
//         l.erase(it);
//     }

//     cout << "After erase: " << endl;
//     for (int i : l) {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << "Size of List: " << l.size() << endl;

//     // Initializing list with 1 of size 10
//     list<int> b(10, 1);
//     cout << "Printing b: ";
//     for (int i : b) {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }



// PAIRS : utility identity

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     pair<int,int> p ={1,2};
//     pair<string,char> ps = {"aman",'A'};
//     pair<int,pair<char,int>> pp = {1,{'a',1}};

//     vector<pair<int,int>> vec = {{1,2},{3,4},{5,6}};
    
//     cout<<p.first <<" ";
//     cout<<p.second <<" "<<endl;

//     cout<<ps.first<<" ";
//     cout<<ps.second<<" " <<endl;

//     cout<<pp.first<<" ";
//     cout<<pp.second.first<<" ";
//     cout<<pp.second.second<<" "<<endl;


//     vec.push_back({4,5}); // insert
//     vec.emplace_back(4,5); // in-place objects create

//     for(auto p:vec){
//     // for(pair<int,int> p :vec){
//       cout<<p.first<<" "<<p.second<<endl;
//     }

//   return 0;
// }




// Stack STL
// #include<iostream>
// #include<stack>

// using namespace std;

// int main(){
//   stack<string> s;

//   s.push("Aman");
//   s.push("Trivedi");
//   s.push("Web-Dev");

//   while(!s.empty()){
//     cout<<s.top()<<" ";
//     s.pop();
//   }
//   cout<<endl;

//   stack<int> s2;

//   s2.push(1);
//   s2.push(2);
//   s2.push(3);

//   cout<<"Top Element : "<<s2.top()<<endl;
//   s2.pop();
//   cout<<"Now Top Element : "<<s2.top()<<endl;

//   cout<<"Size of Stack : "<<s2.size()<<endl;
//   cout<<"Empty or not : "<<s2.empty()<<endl;

//   return 0;
// }




////      QUEUE FOLLOWS FIFO

// #include<iostream>
// #include<queue>

// using namespace std;

//   int main(){
//     queue<string> q;
//     q.push("Aman");
//     q.push("Trivedi");
//     q.push("Web-Dev");

//     cout<<"First element : "<<q.front()<<endl;
//     q.pop();
//     cout<<"First element : "<<q.front()<<endl;

//     cout<<"Size of queue after pop : "<<q.size()<<endl;
    
//     return 0;
//   }


// Priroity Queue ... whenever we fetch the element it is the greatest element

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){

//   //max heap
//   priority_queue<int> maxi;

//   maxi.push(2);
//   maxi.push(3);
//   maxi.push(4);
//   maxi.push(1);

//   cout<<"Size is : "<<maxi.size()<<endl;
//   int n = maxi.size();
//   for(int  i=0;i<n;i++){
//     cout<<maxi.top()<<" ";
//     maxi.pop();
//   }cout<<endl;

//   //min heap
//   priority_queue<int, vector<int>, greater<int>> mini;
//   mini.push(2);
//   mini.push(4);
//   mini.push(1);
//   mini.push(3);

//   cout<<"Size is : "<<mini.size()<<endl;
//   int m = mini.size();
//   for(int i=0;i<m;i++){
//   cout<<mini.top()<<" ";
//   mini.pop();
//   }cout<<endl;

//   cout<<"is maxi empty ?? : "<<maxi.empty()<<endl;
//   cout<<"is mini empty ?? : "<<mini.empty()<<endl;


//   return 0;
// }




// from there i have apna college series notes
//MAP STL : Stores always in the form of key value pairs (key,value)



// #include<iostream>
// #include<map>
// using namespace std;

// int main() {
//   map<string,int> m;
//   m["tv"] = 100;
//   m["laptop"] = 200;
//   m["tablets"] = 250;
//   m["headphones"] = 300;

//   m.insert({"cameras",25});

//   for(auto p:m){
//     cout<<p.first<<" "<<p.second << endl; // here thr output will be in lexicographically sorted order in ascending order
//   }

//   cout<<"count = "<<m.count("laptop")<<endl;
//   cout<<"count = "<<m["laptop"]<<endl;

//   if(m.find("camera")!= m.end()) {
//     cout<<"Found\n"<<endl;
//   }else{
//     cout<<"Not Found\n";
//   }
  
//   return 0;
// }



// Other Maps
// Multi Map and Unordered Map


// MULTI MAP
// #include<iostream>
// #include<map>
// using namespace std;

// int main() {
//   multimap<string,int> m;

//   m.emplace("tv",100);
//   m.emplace("laptop",100);
//   m.emplace("machine",100);
//   m.emplace("computer",100);
//   m.emplace("headphone",100);
  


//   for(auto p:m){
//     cout<<p.first<<" "<<p.second << endl; // here thr output will be in lexicographically sorted order in ascending order
//   }

  
//   return 0;
// }



// UNORDERED MAP

// #include<iostream>
// #include<map>
// #include<unordered_map> 

// using namespace std;

// int main() {

//   unordered_map<string,int> m;

//     m.emplace("tv",100);
//     m.emplace("laptop",100);
//     m.emplace("machine",100);
//     m.emplace("computer",100);
//     m.emplace("headphone",100);

//     for(auto p:m) {
//       cout<<p.first <<" "<<p.second << endl;
//     }
  
//   return 0;
// }


// SET STL set stores only unique elements like we say if we push 1 3times then it will store only 1 once... Implementation is like bst bts.. we can't modify the element ..  element will be return in sorted order.
// unorder set is same as set but it stores elements in random order... but it is faster than normal set

// #include<iostream>
// #include<set>

// using namespace std;

// int main(){
//   set<int> s;
//   s.insert(5);
//   s.insert(5);
//   s.insert(5);
//   s.insert(1);
//   s.insert(4);
//   s.insert(2);
//   s.insert(2);
//   s.insert(2);
//   s.insert(7);
//   for(auto i:s){
//     cout<<i<<" "<<endl;
//   }
//  cout<<endl;
//   s.erase(s.begin());
//   for(auto i:s){
//     cout<<i<<" "<<endl;
//   } cout<<endl;
//   /////// warning !!!!!!!!!!!! doubt !!!!!!! how we erase the begin()+2 ??
//   // set<int> :: iterator it = s.begin();
//   auto it = s.begin();
//   // it++; // advance(it, 1)
//   advance(it, 2);
//   s.erase(it);
//   for(auto i:s){
//     cout<<i<<" "<<endl;
//   }cout<<endl;

//   cout<<"Check whether 5 is present or not : "<<s.count(5)<<endl;
//   cout<<"Check whether 4 is present or not : "<<s.count(4)<<endl;

//   // set<int> :: iterator itr = s.find(5);
//   auto itr = s.find(4);
//   cout<<"Value present at itr : "<<*itr<<endl;
//   for(auto it = itr;it!=s.end();it++){
//     cout<<*it<<" ";
//   }cout<<endl;
  
//   return 0;
// }


// MAP STL... it stores in the form of key value pair... it is also sorted in the form of key...it is in random order in case of unorder map
// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//   map<int,string> m;
//   m[1] = "Aman";
//   m[2] = "Trivedi";
//   m[3] = "Web-Dev";

//   //Another way of insertion
//   m.insert({4,"Yuganshu"});

//   for(auto i:m){
//     cout <<i.first<<" "<<i.second<<" "<<endl;
//   }cout<<endl;

//   cout<<"Is 2 present or not : "<<m.count(2)<<endl;
//   cout<<"Is 12 present or not : "<<m.count(12)<<endl;

//   auto it = m.find(4);

//   for(auto i=it;i!=m.end();i++){
//     cout<<(*i).first<<" "<<(*i).second<<endl;
//   }
  


//   return 0;
// }


// USECASE OF STL
// #include<iostream>
// #include<algorithm>
// #include<vector>

// using namespace std;
// int main(){
//   vector<int> v;

//   v.push_back(1);
//   v.push_back(2);
//   v.push_back(3);
//   v.push_back(4);
//   v.push_back(5);

//   cout<<"Finding 5 : "<<binary_search(v.begin(),v.end(),5)<<endl;
//   cout<<"Finding 6 : "<<binary_search(v.begin(),v.end(),6)<<endl;
  
//   return 0;
// }




/// SOME IMP ALGORITHMS

// SORTING

// #include<iostream>
// #include <algorithm>  // Include this header for sort()
// using namespace std;

// int main() {

//   int arr[5] = {5,8,3,2,7};
//   sort(arr,arr+5);

//   for(auto val:arr){
//     cout<<val<<" ";
//   }
//   cout<<endl;
  
//   return 0;
// }  


// #include<iostream>
// #include <algorithm>  // Include this header for sort()
// #include<vector>
// using namespace std;

// int main() {

//   vector<int> arr = {7,765,65,5,2};

//   sort(arr.begin(),arr.end());

//   for(auto val:arr){
//     cout<<val<<" ";
//   }
//   cout<<endl;

//   sort(arr.begin(),arr.end(),greater<int>());// sort in reverse order
//   for(auto val:arr){
//     cout<<val<<" ";
//   }
//   cout<<endl;

//   return 0;
// }



// NEXT PERMUATION 

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//   string s = "abc";
//   next_permutation(s.begin(),s.end());

//   cout<<s<<endl;
  
//   return 0;
// }














