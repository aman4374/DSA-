// #include<iostream>
// using namespace std;

// int main() {
//     // int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     // cout<<matrix[2][1]<<" ";

//     int m,n;
//     cin>>m>>n;
//     int matrix[m][n];

//     for(int row=0;row<m;row++){
//         for(int col=0;col<n;col++){
//             cin >> matrix[row][col] ;
//         }
//     }

//     for(int row=0;row<m;row++){
//         for(int col=0;col<n;col++){
//             cout<<matrix[row][col] <<" ";
//         }
//         cout<<endl;
//     }
//     cout<<matrix[2][1]<<" ";
//     return 0;
// }


/// LINEAR SEARCH IN 2D ARRAY
// #include <iostream>
// #include <utility>  // for std::pair
// using namespace std;

// pair<int, int> linearSearch(int mat[][3], int row, int col, int key) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             if (mat[i][j] == key) {
//                 return make_pair(i, j);  // return the indices as a pair
//             }
//         }
//     }
//     return make_pair(-1, -1);  // return (-1, -1) if the element is not found
// }

// int main() {
//     int mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
//     int row = 4;
//     int col = 3;

//     pair<int, int> result = linearSearch(mat, row, col, 21);
    
//     if (result.first != -1 && result.second!=-1) {
//         cout << "Element found at index: " << result.first << "," << result.second << endl;
//     } else {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }


// #include<iostream>
// #include<climits>
// using namespace std;

// int getMaxSum(int mat[4][3],int row,int col){
//     int maxRowSum = INT_MIN;

//     for(int i=0;i<row;i++){
//         int rowsum = 0;
//         for(int j=0;j<col;j++){
//             rowsum += mat[i][j];
//         }
//         maxRowSum = max(maxRowSum,rowsum);

//     }
//     return maxRowSum;

// }
// int main() {
//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int row = 3;
//     int col = 3;

//     cout<<getMaxSum(matrix,row,col)<<endl;

//     return 0;
// }



// diagonal sum

// #include<iostream>
// using namespace std;

// int diagonalsum(int mat[][4],int n){
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i == j ){
//                 sum += mat[i][j];
//             }
//             else if(j == n-1-i){
//                 sum += mat[i][j];
//             }
//         }
//     }
//     return sum;
// }

// int main() {
//     int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int n = 4;

//     cout<<diagonalsum(matrix,n)<<endl;

    
//     return 0;
// }


// optimize way to find diagonal sum

// #include<iostream>   // tc: O(n)
// using namespace std;

// int diagonalsum(int mat[][4],int n){
//     int sum = 0;
//     // pd : j==i
//     //sd :  j==n-1-i

//     for(int i=0;i<n;i++){
//         sum += mat[i][i];

//         if( i != n-i-1){
//             sum += mat[i][n-i-1];
//         }
//     }
//     return sum;
// }

// int main() {
//     int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int n = 4;

//     cout<<diagonalsum(matrix,n)<<endl;

    
//     return 0;
// }





///   2D Vectors
// in 2d vectors we can have the size of the each row different
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<vector<int>> mat={{1,2,3},{4,5,6,10,11,12},{7,8,9}};

//     // rows = mat.size();
//     // cols = mat[i].size(); 1 row me kitne elements hai
//     for(int i=0;i<mat.size();i++){
//         for(int j=0;j<mat[i].size();j++){
//             cout<< mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<mat[0][0]<<endl;


//     return 0;
// }

// search in 2d matrix :: solved on leetcode



// SEARCH IN A 2D MATRIX II
// all the integer are sorted in a col and row


// spiral matrix : solved on leetcode
