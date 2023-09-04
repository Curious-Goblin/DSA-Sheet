#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxSum = 0;
        if(nums.size()==1)
        {
            return nums[0];
        }
        for (unsigned int i = 0; i < nums.size(); i++)
        {
            for (unsigned int j = i + 1; j < nums.size(); j++)
            {
                int sum = 0;
                for (unsigned int k = i; k <= j; k++)
                {
                    sum = sum + nums[k];
                }
                if (sum > maxSum)
                {
                    maxSum = sum;
                }
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
    cout<<result;
    return 0;
}
// 9 -2 1 -3 4 -1 2 1 -5 4