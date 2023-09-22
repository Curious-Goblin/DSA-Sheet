#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// BRUTE FORCE TIME COMPLEXITY=O(N*3)
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        if (nums.size() < 3)
        {
            vector<int> temp;
            temp.push_back(0);
            result.push_back(temp);
        }
        else
        {
            for (unsigned int i = 0; i < nums.size() - 2; i++)
            {
                for (unsigned int j = i + 1; j < nums.size() - 1; j++)
                {
                    for (unsigned int k = j + 1; k < nums.size(); k++)
                    {
                        vector<int> temp;
                        if (nums[i] + nums[j] + nums[k] == 0)
                        {
                            temp.push_back(nums[i]);
                            temp.push_back(nums[j]);
                            temp.push_back(nums[k]);
                            result.push_back(temp);
                        }
                    }
                }
            }
        }
        for (unsigned int i = 0; i < result.size(); i++)
        {
            for (unsigned int j = 0; j < result[0].size(); j++)
            {
                sort(result[i].begin(), result[i].end());
            }
        }
        sort(result.begin(),result.end());
        result.erase(std::unique(result.begin(), result.end()), result.end());
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
    vector<vector<int>> result = s.threeSum(nums);
    for (unsigned int i = 0; i < result.size(); i++)
    {
        for (unsigned int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}