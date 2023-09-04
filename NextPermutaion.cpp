#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* OPTIMAL SOLUTION TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    	int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
}; 
*/


//MY SOLUTION TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int a = -1, c = 101, b = 0;
        for (unsigned int i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                a = i - 1;
                break;
            }
        }
        if (a == -1)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for (unsigned int j = a + 1; j < nums.size(); j++)
            {
                if (nums[j] > nums[a])
                {
                    c = min(nums[j], c);
                    if (c == nums[j])
                    {
                        b = j;
                    }
                }
            }
            swap(nums[a], nums[b]);
            reverse(nums.begin() + a + 1, nums.end());
        }
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
    s.nextPermutation(nums);
    for (auto &value : nums)
    {
        cout << value << " ";
    }
    return 0;
}