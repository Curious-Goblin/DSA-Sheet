#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        auto it1 = nums.begin(), it2 = nums.begin();
        int sum = *it2, maxSum = *it2;
        while (it1 != nums.end())
        {
            if (nums.size() == 1)
            {
                return nums[0];
            }
            else
            {
                it2++;
                if (it2 == nums.end())
                {
                    it1++;
                    if(it1==nums.end())
                    {
                        return maxSum;
                    }
                    it2 = it1;
                    sum = *it2;
                }
                else
                {
                    sum = sum + *it2;
                }
                maxSum = max(sum, maxSum);
            }
        }
        return maxSum;
    }
};

int main()
{
    int n;
    cin >> n;
    int a;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    Solution s;
    int result = s.maxSubArray(nums);
    cout << result;
    return 0;
}
// 9 -2 1 -3 4 -1 2 1 -5 4
// 5 5 4 -1 7 8