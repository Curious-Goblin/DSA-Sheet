#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int sum=0,count=0;
        for(unsigned int i=0;i<nums.size();i++)
        {
            sum=0;
            for(unsigned int j=i;j<nums.size();j++)
            {
                sum=sum+nums[j];
                if(sum==k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    int n, k;
    cin >> n >> k;
    int a;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    Solution s;
    int res = s.subarraySum(nums, k);
    cout << res;
    return 0;
}

// 3 2 1 1 1
// 3 3 1 2 3
// 3 0 -1 -1 1
// 3 0 1 -1 0
// 8 3 100 1 100 2 100 1 100 2



 // auto it = nums.begin(), it1 = nums.begin() + 1;
        // int sum = *it, count = 0;
        // while (it != nums.end())
        // {
        //     if (nums.size() == 1)
        //     {
        //         if (nums[0] == k)
        //         {
        //             return 1;
        //         }
        //         else
        //         {
        //             return 0;
        //         }
        //     }
        //     else if (sum == k)
        //     {
        //         count++;
        //         if (*it1 == 0)
        //         {
        //             sum = sum + (*it1);
        //             it1++;
        //         }
        //         else
        //         {
        //             it++;
        //             sum = *it;
        //             it1 = it + 1;
        //         }
        //     }
        //     else if (sum < k)
        //     {
        //         sum = sum + (*it1);
        //         it1++;
        //     }
        //     else if (it1 == nums.end() || sum > k)
        //     {
        //         it++;
        //         sum = *it;
        //         it1 = it + 1;
        //     }
        // }
        // return count;