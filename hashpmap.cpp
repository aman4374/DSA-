// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     string str = "abbbbbbbssaaaas";
//     int count[26] = {0}; // Array to store frequency of characters from 'a' to 'z'

//     // Count frequency of each character
//     for (char ch : str) {
//         count[ch - 'a']++;
//     }
//     // Find the maximum occurring character
//     char maxChar = 'a';
//     int maxCount = 0;
    
//     for (int i = 0; i < 26; i++) {
//         if (count[i] > maxCount) {
//             maxCount = count[i];
//             maxChar = (char)(i + 'a');
//         }
//     }

//     cout << "Maximum occurring character: " << maxChar << " with count: " << maxCount << endl;
//     return 0;
// }



// #include<iostream>
// #include<unordered_map>
// #include<map>
// using namespace std;

// int main() {

//     // creation
//     unordered_map<string,int> m;

//     //insertion

//     // 1
//     pair<string,int> p = make_pair("babbar",3);
//     m.insert(p);

//     //2
//     pair<string,int> pair2("love",2);
//     m.insert(pair2);

//     //3
//     m["mera"] = 1;
//     // what will happen? 
//     m["mera"] = 2; // the value of 1 will change to 2


//     // Search
//     cout<<m["mera"]<<endl;
//     cout<<m.at("babbar")<<endl;

//     // cout<<m.at("aman")<<endl;
//     cout<<m["aman"]<<endl;
//     cout<<m.at("aman")<<endl;

    
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 3, 3, 4, 6, 6, 6, 6, 5};
//     unordered_map<int, int> count;

//     for(int i = 0; i < arr.size(); i++) {
//         count[arr[i]]++;
//     }

//     for(auto i : count) {
//         cout << "Element: " << i.first << " -> Count: " << i.second << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> count;
        int maxFreq = 0;
        int totalCount = 0;

        // Count occurrences of each element and track the maximum frequency
        for (int num : nums) {
            count[num]++;
            maxFreq = max(maxFreq, count[num]);
        }

        // Debugging: Print frequency of each element
        for (auto i : count) {
            cout << "Element: " << i.first << " -> Count: " << i.second << endl;
        }

        // Sum up the counts of all elements that have max frequency
        for (auto i : count) {
            if (i.second == maxFreq)
                totalCount += i.second;
        }

        return totalCount;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,2,3,1,4}; // Example test case
    cout << "Output: " << sol.maxFrequencyElements(nums) << endl;
    return 0;
}
