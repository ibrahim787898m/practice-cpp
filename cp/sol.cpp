/*
*   author:  mibrahim0pu
*/


// competitive programming version
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define endl '\n'

int32_t main() {
    fastio();

    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<int, int> seen;

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            cout << seen[complement] << " " << i << endl;
            return 0;
        }
        seen[nums[i]] = i;
    }

    cout << "No solution found" << endl;

    return 0;
}


// LeetCode version
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
//     public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> seen;

//         for (int i = 0; i < nums.size(); i++) {
//             int complement = target - nums[i];
//             if (seen.find(complement) != seen.end()) {
//                 return {seen[complement], i};
//             } else {
//                 seen[nums[i]] = i;
//             }
//         }
//         return {};
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;

//     vector<int> res = sol.twoSum(nums, target);

//     cout << res[0] << " " << res[1] << endl;

//     return 0;
// }