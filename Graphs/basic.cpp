// // implement adj list

// #include<iostream>
// #include<list>
// #include<map>
// #include<unordered_map>
// using namespace std;


// class graph {
// public: 
//     unordered_map<int, list<int>> adjList;

//     void addEdge(int u, int v, bool dir ) {
//         // direction 0 -> undirected, 1 -> directed

//         // create an edge from u to v
//         adjList[u].push_back(v);
//         if(dir==0) {
//             adjList[v].push_back(u);
//         }
//     }

//     void printAdjList() {
//         for(auto i: adjList) {
//             cout<<i.first<<"->";
//             for(auto entry: i.second) {
//                 cout<<entry<<",";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main() {

//     int n;
//     cout<<"Enter the number of nodes: "<<endl;
//     cin>>n;

//     int m;
//     cout<<"Enter the number of edges: "<<endl;
//     cin>>m;

//     graph g;

//     for(int i=0; i<m; i++) {
//         int u, v;
    
//         cout<<"Enter the edge: "<<endl;
//         cin>>u>>v;
        
//         // creating an undirected graph
//         g.addEdge(u, v, 0);
//     }

//     // print the adj list
//     g.printAdjList();
    
//     return 0;
// }




/// using vector : will complete later

// #include<iostream>
// using namespace std;

// int main() {
    
//     return 0;
// }
