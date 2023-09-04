#include <vector>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        unordered_map<int, int> key1;
        unordered_map<int, int> key2;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    key1[i] = 1;
                    key2[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (key1[i] == 1 || key2[j] == 1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main()
{
    int m, n;
    cin >> n >> m;
    vector<vector<int>> matrix;
    int a;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            row.push_back(a);
        }
        matrix.push_back(row);
    }
    Solution s;
    s.setZeroes(matrix);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}