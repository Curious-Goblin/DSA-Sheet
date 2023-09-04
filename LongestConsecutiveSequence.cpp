#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* OPTIMAL APPROACH TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1) 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> map;
        for(int i = 0; i<nums.size(); i++){
            map[nums[i]] = true;
        }
        for(int i=0; i<nums.size(); i++){
            if(map.count(nums[i]-1) > 0){
                map[nums[i]] = false;
            }
        }
        int maxlen = 0;
        for(int i=0; i<nums.size(); i++){
            if(map[nums[i]] == true){
                int j=0; int count=0;
                while(map.count(nums[i]+j) > 0){
                    j++;
                    count++;
                }
                if(count>maxlen){
                    maxlen = count;
                }
            }
        }
        return maxlen;
    }
};
*/

//MY APPROACH TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1) 

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int count = 1,maxcount=1;
        for (unsigned int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                continue;
            }
            else if (nums[i + 1] - nums[i] == 1)
            {
                count++;
            }
            else
            {
                maxcount=max(maxcount,count);
                count = 1;
            }
        }
        maxcount=max(maxcount,count);
        return maxcount;
    }
};

// 6 100 4 200 1 3 2
// 10 0 3 7 2 5 8 4 6 0 1
//  0 0 1 2 3 4 5 6 7 8
// 11 9 1 4 7 3 -1 0 5 8 -1 6


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
    int result = s.longestConsecutive(nums);
    cout << result;
    return 0;
}