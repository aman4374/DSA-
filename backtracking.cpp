///        RAT IN MAZE PROBLEM

// #include<iostream>
// #include<vector>
// using namespace std;

// bool isSafe(int newx,int newy,vector<vector<bool>> &vis,vector<vector<int>> &arr,int n){
//     if((newx>=0 && newx<n) && (newy>=0 && newy<n) && vis[newx][newy] !=1 && arr[newx][newy] == 1){
//         return true;
//     }
//     else{
//         return false;
//     }

// }

// void solve(int x,int y, vector<vector<int>> &arr,int n , vector<string> &ans,vector<vector<bool>> &vis,string path){

//     // base case

//     if(x==n-1 && y==n-1){
//         ans.push_back(path);
//         return;
//     }
//     // 4 movements : D,L,R,U
//     vis[x][y] = 1;

//     // DOWN
//      if(isSafe(x+1,y,vis,arr,n)){
//         solve(x+1,y,arr,n,ans,vis,path+'D');
//      }

//      // LEFT
//      if(isSafe(x,y-1,vis,arr,n)){
//         solve(x,y-1,arr,n,ans,vis,path+'L');
//      }

//      // RIGHT
//      if(isSafe(x,y+1,vis,arr,n)){
//         solve(x,y+1,arr,n,ans,vis,path+'R');
//      }

//      // UPWARD
//      if(isSafe(x-1,y,vis,arr,n)){
//         solve(x-1,y,arr,n,ans,vis,path+'U');   
//      }

//      vis[x][y]=0;
// }

// vector<string> searchMaze(vector<vector<int>> &arr,int n){
//     vector<string> ans;
//     vector<vector<bool>> visited(n,vector<bool> (n,0));
//     string path = "";

//     if(arr[0][0]==0){
//         return ans;
//     }

//     solve(0,0,arr,n,ans,visited,path);
//     return ans;
// }

// int main() {

//     vector<vector<int>> arr = {{1, 0, 0, 0}, 
//                                {1, 1, 0, 1}, 
//                                {1, 1, 0, 0}, 
//                                {0, 1, 1, 1}};
    
//     int n = arr.size();

//     cout << "Maze Grid:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     vector<string> paths = searchMaze(arr, n);

//     if (paths.empty()) {
//         cout << "No path found!\n";
//     } else {
//         cout << "Possible paths:\n";
//         for (const string &path : paths) {
//             cout << path << endl;
//         }
//     }

    
//     return 0;
// }




//           N QUEENS PROBLEM

