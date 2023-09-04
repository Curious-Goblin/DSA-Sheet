#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// OPTIMAL APPROACH
// TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if(prices.size()<2)
        return 0;
        int min =prices[0];
        int maxProfit=0;
        for(unsigned int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            else
            {
                maxProfit=max(maxProfit,prices[i]-min);
            }
        }
        return maxProfit; 
    }
};

/*
BELOW LOGIC WORKS ON THE SEARCHING OF THE MINIMUM ELEMENT BUT WE SHOULD WORK ON LOGIC OF FINDING MAXIMUM PROFIT
THIS LOGIN WILL FAIL ON THE CASE LIKE 3 2 6 5 0 3 IN THIS CASE BELOW LOGIC WILL FIND 0 AS THE MINIMUM ELEMENT BUT ACTUALLY
THE MINIMUM ELEMENT SHOULD BE 2 AND MAX SHOULD BE 6 SO AS TO MAXIMIZE THE PROFIT
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if(prices.size()<2)
        {
            return 0;
        }
        auto min = min_element(prices.begin(), prices.end());
        int profit = 0;
        if (min == prices.end() - 1)
        {
            prices.pop_back();
            profit = maxProfit(prices);
        }
        else
        {
            auto max = max_element(min + 1, prices.end());
            profit = *max - *min;
        }
        return profit;
    }
};
*/

int main()
{
    int n;
    int a;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    Solution s;
    int result = s.maxProfit(nums);
    cout << result;
    return 0;
}