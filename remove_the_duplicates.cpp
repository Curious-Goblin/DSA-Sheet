#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
OPTIMAL APPROACH
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

*/

// MY APPROACH
// TIME COMPLEXITY = O(N*N) SPACE COMPLEXITY = O(1)

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int current_element, count = 0;
        unsigned int i = 0, j = 0;
        if (nums[0] == 0)
        {
            for (i = 0; i < nums.size() - 1; i++)
            {
                current_element = nums[i];
                for (j = i+1; j < nums.size(); j++)
                {
                    if (nums[j] == current_element)
                    {
                        nums[j] = 101;
                    }
                }
            }
            auto new_end = remove(nums.begin(), nums.end(), 101);
            nums.erase(new_end, nums.end());
            for (i = 0; i < nums.size(); i++)
            {
                count++;
            }
        }
        else
        {
            for (i = 0; i < nums.size() - 1; i++)
            {
                current_element = nums[i];
                for (j = i+1; j < nums.size(); j++)
                {
                    if (nums[j] == current_element)
                    {
                        nums[j] = 101;
                    }
                }
            }
            auto new_end = remove(nums.begin(), nums.end(), 101);   //o(n)
            nums.erase(new_end, nums.end());                      //o[n] generally but o(1) when removal started form end like here 
            for (i = 0; i < nums.size(); i++)
            {
                count++;
            }
        }
        return count;
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
    int  result = s.removeDuplicates(nums);
    cout<<result;
    return 0;
}