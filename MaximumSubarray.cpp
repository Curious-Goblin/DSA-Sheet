#include <iostream>
#include <vector>
using namespace std;
//OPTIMAL SOLUTION TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int current_sum = nums[0], max_sum = nums[0];

        for (unsigned int i = 1; i < nums.size(); ++i)
        {
            current_sum = max(nums[i], current_sum + nums[i]);
            max_sum = max(max_sum, current_sum);
        }

        return max_sum;
    }
};


/*o(N*2) TLE
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
*/


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