#include<iostream>
#include<vector>
using namespace std;

/*
OPTIMAL APPROACH
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        // Build the hash table
        for (int i = 0; i < n; i++) {
            numMap[nums[i]] = i;
        }

        // Find the complement
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement) && numMap[complement] != i) {
                return {i, numMap[complement]};
            }
        }

        return {}; // No solution found
    }
};

MY APPROACH
TIME COMPLEXITY = O(N*N) SPACE COMPLEXITY = O(N)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(unsigned int i=0;i<nums.size();i++)
        {
            for(unsigned int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};

int main(){
    int n,a=0,target;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    cin>>target;
    Solution s;
    vector<int> res = s.twoSum(nums,target);
    for(unsigned int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}