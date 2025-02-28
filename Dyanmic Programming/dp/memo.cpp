/// DP USING RECURSION + MEMOIZATION

// #include<iostream>
// #include<vector>
// using namespace std;

// int fib(int n, vector<int> &dp) {
//     // STEP 1
//     if(n == 0 || n == 1) {
//         return n;
//     }

//     // STEP 2
//     if(dp[n] != -1) {
//         return dp[n];
//     }

//     dp[n] = fib(n-1, dp) + fib(n-2, dp);
//     return dp[n];
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> dp(n + 1,-1);

//     // for(int i = 0; i <= n; i++) {  // Fixing the loop
//     //     dp[i] = -1;
//     // }

//     cout << fib(n, dp) << endl;
//     return 0;
// }


// DP USING TABULATION METHOD

// #include<iostream>
// #include<vector>
// using namespace std;

// int fib(int n) {

//     vector<int> dp(n + 1);

//     // STEP 1
    
//       dp[0] = 0;
//       dp[1] = 1;
    

//     // STEP 2
//     for(int i=2;i<=n;i++){
//         dp[i] = dp[i-1]+dp[i-2];
//     }
//     return dp[n];
    
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << fib(n) << endl;
//     return 0;
// }



//optimize same code for space optimization

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int prev1 = 1;
//     int prev2 = 0;

//     if(n==0) return prev2;

//     for(int i=2;i<=n;i++){
//         int curr = prev1+prev2;

//         //shift logic
//         prev2= prev1;
//         prev1 = curr;
//     }
//     //cout<<prev2<<endl;

//     cout<<prev1<<endl;

//     return 0;
// }




// Minimum no of coins

// using recursion
// #include<iostream>
// #include<vector>
// #include<climits>

// using namespace std;

// int solveRec(vector<int> &arr,int x){

//     if(x==0) return 0;

//     if(x<0) return INT_MAX;

//     int mini = INT_MAX;
//     for(int i=0;i<arr.size();i++){
//         int ans = solveRec(arr,x-arr[i]);

//         if(ans!=INT_MAX) {
//             mini = min(mini,1+ans);
//         }
//     }
//     return mini;


// }


// int main() {

//     vector<int> arr={2,3,4};
//     int x = 13;

//     int res = solveRec(arr,x);

//     cout<<res;

    
//     return 0;
// }



/// adding dp to the rec
// #include<iostream>
// #include<vector>
// #include<climits>

// using namespace std;

// int solveMem(vector<int> &arr,int x,vector<int> &dp){

//     if(x==0) return 0;

//     if(x<0) return INT_MAX;

//     if(dp[x]!=-1) return dp[x];

//     int mini = INT_MAX;
//     for(int i=0;i<arr.size();i++){
//         int ans = solveMem(arr,x-arr[i],dp);

//         if(ans!=INT_MAX) {
//             mini = min(mini,1+ans);
//         }
//     }
//     dp[x] = mini;
//     return mini;
// }

// int main() {

//     vector<int> arr = {2,3,4};
//     int x = 13;

//     vector<int> dp(x+1, -1);

//     int res = solveMem(arr, x, dp);

//     if(res == INT_MAX) return -1 ;
//     else cout << res << endl;

//     return 0;
// }



// using tabulation

// #include<iostream>
// #include<vector>
// #include<climits>

// using namespace std;

// int solveMem(vector<int> &arr,int x,vector<int> &dp){

//     if(x==0) return 0;

//     if(x<0) return INT_MAX;

//     if(dp[x]!=-1) return dp[x];

//     int mini = INT_MAX;
//     for(int i=0;i<arr.size();i++){
//         int ans = solveMem(arr,x-arr[i],dp);

//         if(ans!=INT_MAX) {
//             mini = min(mini,1+ans);
//         }
//     }
//     dp[x] = mini;
//     return mini;
// }

// int main() {

//     vector<int> arr = {2,3,4};
//     int x = 13;

//     vector<int> dp(x+1, -1);

//     int res = solveMem(arr, x, dp);

//     if(res == INT_MAX) return -1 ;
//     else cout << res << endl;

//     return 0;
// }


// MAX SUM OF NON-ADJACENT ELEMENTS


//  with recursion
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> &arr, int n) {
//     if(n < 0) return 0;
//     if(n == 0) return arr[0];

//     int incl = solve(arr, n - 2) + arr[n];
//     int excl = solve(arr, n - 1);

//     return max(incl, excl);
// }

// int main() {
//     vector<int> arr = {9, 9, 8, 2};
//     int n = arr.size();

//     int ans = solve(arr, n - 1);  // Fixing the index
//     cout << ans;

//     return 0;
// }




// rec+memo

// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> &arr, int n,vector<int> &dp) {
//     if(n < 0) return 0;
//     if(n == 0) return arr[0];

//     if(dp[n]!=-1) return dp[n];

//     int incl = solve(arr, n - 2,dp) + arr[n];
//     int excl = solve(arr, n - 1,dp);

//     dp[n] = max(incl, excl);

//     return dp[n];
// }

// int main() {
//     vector<int> arr = {9, 9, 8, 2};
//     int n = arr.size();

//     vector<int> dp(n+1,-1);

//     int ans = solve(arr, n - 1,dp);  // Fixing the index
//     cout << ans;

//     return 0;
// }




// using tabulation

// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> &arr) {
//     int n = arr.size();
//     vector<int>dp(n,0);
    
    
//     dp[0] = arr[0];
//     dp[1] = max(dp[0],dp[1]);

//     for(int i=2;i<n;i++){
//         int incl =dp[i-2]+arr[i];
//         int excl = dp[i-1];

//         dp[i] = max(incl,excl);
//     }
//     return dp[n-1];

// }

// int main() {
//     vector<int> arr = {9, 9, 8, 2};
    

//     int ans = solve(arr);  // Fixing the index
//     cout << ans;

//     return 0;
// }


//  SPACE COMPLEXITY IN O(1)

// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> &arr) {
//     int n = arr.size();

//     int prev2 = 0;
//     int prev1 = arr[0];
    
//     for(int i=1;i<n;i++){
//         int incl =prev2+arr[i];
//         int excl = prev1;
        
//         int ans = max(incl,excl);
//         prev2 = prev1;
//         prev1 = ans;
//     }
//     return prev1;

// }

// int main() {
//     vector<int> arr = {9, 9, 8, 2};

//     int ans = solve(arr);  // Fixing the index
//     cout << ans;

//     return 0;
// }





// HOUSE ROBBER
