#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// BRUTE FORCE
// class Solution
// {
// public:
//     vector<vector<int>> fourSum(vector<int> &nums, int target)
//     {
//         vector<vector<int>> result;
//         if (nums.size() < 4)
//         {
//             // vector<int> temp;
//             // temp.push_back(0);
//             // result.push_back(temp);
//             return result;
//         }
//         for (unsigned int i = 0; i < nums.size() - 3; i++)
//         {
//             for (unsigned int j = i + 1; j < nums.size() - 2; j++)
//             {
//                 for (unsigned int k = j + 1; k < nums.size() - 1; k++)
//                 {
//                     for (unsigned int l = k + 1; l < nums.size(); l++)
//                     {
//                         vector<int> temp;
//                         long long int comp = nums[i] + nums[j] + nums[k] + nums[l];
//                         long long int target1=target;
//                         if (comp == target1)
//                         {
//                             temp.push_back(nums[i]);
//                             temp.push_back(nums[j]);
//                             temp.push_back(nums[k]);
//                             temp.push_back(nums[l]);
//                             result.push_back(temp);
//                         }
//                     }
//                 }
//             }
//         }
//         for (unsigned int i = 0; i < result.size(); i++)
//         {
//             sort(result[i].begin(), result[i].end());
//         }
//         sort(result.begin(), result.end());
//         result.erase(std::unique(result.begin(), result.end()), result.end());
//         return result;
//     }
// };

// OPTIMAL SOLUTION
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
    }
};

int main()
{
    int n, a;
    int target;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    cin >> target;
    Solution s;
    vector<vector<int>> result = s.fourSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}