#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
OPTIMAL APPROACH
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx = 0; // Maximum consecutive ones encountered
        int count = 0; // Current count of consecutive ones
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                if (count > maxx) {
                    maxx = count;
                }
            } else {
                count = 0; // Reset count for consecutive ones
            }
        }
        
        return maxx; // Return the maximum count
    }
};

MY APPROACH
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
*/
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        vector<int> c;
        for (unsigned int i = 0; i < nums.size(); i++)
        {
            if (((i == (nums.size() - 1)) && (nums[i] == 1)))
            {
                count++;
                c.push_back(count);
            }
            else if (nums[i] == 1)
            {
                count++;
            }
            else if (nums[i] == 0)
            {
                c.push_back(count);
                count = 0;
            }
        }
        auto max_streak = max_element(c.begin(), c.end());
        return *max_streak;
    }
};

int main()
{
    int n, a;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    Solution s;
    int result = s.findMaxConsecutiveOnes(nums);
    cout << result;
    return 0;
}