#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include<map>
using namespace std;

// class Solution
// {
// public:
//     vector<int> majorityElement(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         unsigned int count = 1;
//         vector<int> result;
//         if (nums.size() == 1)
//         {
//             result.push_back(nums[0]);
//             return result;
//         }
//         for (unsigned int i = 1; i < nums.size(); i++)
//         {
//             if (nums[i - 1] == nums[i])
//             {
//                 count++;
//             }
//             else if (count > nums.size() / 3)
//             {
//                 result.push_back(nums[i - 1]);
//                 count=1;
//             }
//             else
//             {
//                 count = 1;
//             }
//         }
//         if(nums[nums.size()-1]!=nums[nums.size()-2])
//         {
//             count=1;
//             if(count>nums.size()/3)
//             {
//                 result.push_back(nums[nums.size()-1]);
//             }
//         }
//         else
//         {
//             if(count>nums.size()/3)
//             {
//                 result.push_back(nums[nums.size()-1]);
//             }
//         }
//         return result;
//     }
// };

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        map<int, int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            res[nums[i]]++;
        }
        vector<int> result;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(res[nums[i]]>nums.size()/3)
        //     {
        //         result.push_back(nums[i]);
        //     }
        // }
        for(auto it=res.begin();it!=res.end();it++)
        {
            if((*it).second > nums.size()/3)
            {
                result.push_back((*it).first);
            }
        }
        return result;
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
    vector<int> result = s.majorityElement(nums);
    for (unsigned int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}