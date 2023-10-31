#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <numeric>
using namespace std;

// BRUTE FORCE TIME COMPLEXITY=O(N*3)
// class Solution
// {
// public:
//     vector<vector<int>> threeSum(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> result;
//         if (nums.size() < 3)
//         {
//             vector<int> temp;
//             temp.push_back(0);
//             result.push_back(temp);
//             return result;
//         }
//         else
//         {
//             for (unsigned int i = 0; i < nums.size() - 2; i++)
//             {
//                 for (unsigned int j = i + 1; j < nums.size() - 1; j++)
//                 {
//                     for (unsigned int k = j + 1; k < nums.size(); k++)
//                     {
//                         vector<int> temp;
//                         if (nums[i] + nums[j] + nums[k] == 0)
//                         {
//                             temp.push_back(nums[i]);
//                             temp.push_back(nums[j]);
//                             temp.push_back(nums[k]);
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
    vector<vector<int>> threeSum(vector<int> &num)
    {

        vector<vector<int>> res;

        std::sort(num.begin(), num.end());

        for (int i = 0; i < num.size(); i++)
        {

            int target = -num[i];
            int front = i + 1;
            int back = num.size() - 1;

            while (front < back)
            {
                int sum = num[front] + num[back];

                // Finding answer which start from number num[i]
                if (sum < target)
                    front++;

                else if (sum > target)
                    back--;

                else
                {
                    vector<int> triplet = {num[i], num[front], num[back]};
                    res.push_back(triplet);

                    // Processing duplicates of Number 2
                    // Rolling the front pointer to the next different number forwards
                    while (front < back && num[front] == triplet[1])
                        front++;

                    // Processing duplicates of Number 3
                    // Rolling the back pointer to the next different number backwards
                    while (front < back && num[back] == triplet[2])
                        back--;
                }
            }

            // Processing duplicates of Number 1
            while (i + 1 < num.size() && num[i + 1] == num[i])
                i++;
        }
        return res;
    }
};

int main()
{
    int n, a;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    Solution s;
    vector<vector<int>> result = s.threeSum(nums);
    if (result.size() != 0)
    {
        for (unsigned int i = 0; i < result.size(); i++)
        {
            for (unsigned int j = 0; j < result[0].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}