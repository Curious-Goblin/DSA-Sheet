#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
OPTIMAL APPROACH
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> numcopy = nums;
        for(int i=0;i<nums.size();i++) 
            nums[(i+k)%nums.size()]=numcopy[i];
    }
};
*/

// MY APPROACH
// TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k=k%nums.size();
        std::rotate(nums.begin(), nums.end() - k, nums.end());
    }
};

int main()
{
    int n,k,a;
    cin>>n;
    cin>>k;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    Solution s;
    s.rotate(nums,k);
    for(unsigned int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}