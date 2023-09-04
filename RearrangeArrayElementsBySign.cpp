#include <iostream>
#include <vector>
using namespace std;

/* OPTIMAL SOLUTION T.C = O(N) S.C = O(N)
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> positive;
        vector<int> negative;
        for (unsigned int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                negative.push_back(nums[i]);
            }
            else
            {
                positive.push_back(nums[i]);
            }
        }
        auto it = positive.begin();
        auto it1 = negative.begin();
        for (unsigned int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                nums[i] = *it;
                it++;
            }
            else{
                nums[i] =*it1;
                it1++;
            }
        }
        return nums;
    }
};
*/


//MY APPROACH T.C = O(N) S.C = O(N)
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> positive;
        vector<int> negative;
        for (unsigned int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                negative.push_back(nums[i]);
            }
            else
            {
                positive.push_back(nums[i]);
            }
        }
        auto it = positive.begin();
        auto it1 = negative.begin();
        for (unsigned int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                nums[i] = *it;
                it++;
            }
            else{
                nums[i] =*it1;
                it1++;
            }
        }
        return nums;
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
    vector<int> result = s.rearrangeArray(nums);
    for (auto &values : nums)
    {
        cout << values << " ";
    }
    return 0;
}
// 18 28 -41 22 -8 -37 46 35 -9 18 -6 19 -26 -37 -10 -9 15 14 31