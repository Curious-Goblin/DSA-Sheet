#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;
        vector<int> temp;
        if (numRows > 2)
        {
            temp.push_back(1);
            res.push_back(temp);
            temp.push_back(1);
            res.push_back(temp);
            for (int i = 2; i < numRows; i++)
            {
                vector<int> temp1;
                for (int j = 0; j < i + 1; j++)
                {
                    if (j == 0 || j == i)
                    {
                        temp1.push_back(1);
                    }
                    else
                    {
                        temp1.push_back(res[i - 1][j - 1] + res[i - 1][j]);
                    }
                }
                res.push_back(temp1);
            }
        }
        else if (numRows == 2)
        {
            temp.push_back(1);
            res.push_back(temp);
            temp.push_back(1);
            res.push_back(temp);
        }
        else
        {
            temp.push_back(1);
            res.push_back(temp);
        }
        return res;
    }
};

int main()
{
    int r;
    cin >> r;
    Solution s;
    vector<vector<int>> res = s.generate(r);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}