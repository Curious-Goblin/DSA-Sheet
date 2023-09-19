#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include<climits>
using namespace std;

/*
 OPTIMAL SOLUTION T.C = O(N) S.C = O(1)
class Solution 
{
    public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int num1=INT_MIN,num2=INT_MIN;
        int count1=0,count2=0;
        for(auto &element:nums)
        {
            if(num1==element)
            {
                count1++;
            }
            else if(num2==element)
            {
                count2++;
            }
            else if(count1==0)
            {
                num1=element;
                count1=1;
            }
            else if(count2==0)
            {
                num2=element;
                count2=1;
            }
            else 
            {
                count1--;
                count2--;
            }
        }
        vector<int> output;
        int countMajority=nums.size()/3;
        count1=0,count2=0;
        for(auto &value:nums)
        {
            if(num1==value)
            {
                count1++;
            }
            if(num2==value)
            {
                count2++;
            }
        }
        if(count1>countMajority)
        {
            output.push_back(num1);
        }
        if(count2>countMajority)
        {
            output.push_back(num2);
        }
        return output;
    }
};
*/


// MY SOLUTION T.C=O(N) S.C = O(N)
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        map<int, int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            res[nums[i]]++;
        }
        vector<int> result;
        for (auto it = res.begin(); it != res.end(); it++)
        {
            if ((*it).second > nums.size() / 3)
            {
                result.push_back((*it).first);
            }
        }
        return result;
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
    vector<int> result = s.majorityElement(nums);
    for (unsigned int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}