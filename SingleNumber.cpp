#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

/*
OPTIMAL SOLUTION
TIME COMPLEXITY = O(N) SPACE COMPLEXITY =O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       unordered_map<int,int> a;
	   for(auto x: nums)
		   a[x]++;
	   for(auto z:a)
		   if(z.second==1)
			   return z.first;
	   return -1;
    }
};
*/

// OPTIMAL SOLUTION
// TIME COMPLEXITY = O(N) SPACE COMPLEXITY =O(1)

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result=0;
        for(auto &value:nums)
        {
            result ^=value;
        }
        return result;
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
    int result = s.singleNumber(nums);
    cout << result;
    return 0;
}