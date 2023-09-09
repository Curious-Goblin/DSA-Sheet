#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        int rowStart = 0, rowEnd = n - 1, columnStart = 0, columnEnd = m - 1, i = 0, j = 0,count=0;
        vector<int> result;
        while (rowStart <= rowEnd && columnStart <= columnEnd )
        {
            for (j = columnStart; j <= columnEnd; j++)
            {
                if(count!=m*n)
                {
                    result.push_back(matrix[rowStart][j]);
                    count++;
                }
            }
            rowStart++;
            for (i = rowStart; i <= rowEnd; i++)
            {
                if(count!=m*n)
                {
                    result.push_back(matrix[i][columnEnd]);
                    count++;
                }
            }
            columnEnd--;
            if (columnStart <= columnEnd)
            {
                for (j = columnEnd; j >= columnStart; j--)
                {
                    if(count!=m*n)
                    {
                        result.push_back(matrix[rowEnd][j]);
                        count++;
                    }
                }
                rowEnd--;
            }
            if (rowStart <= rowEnd)
            {
                for (i = rowEnd; i >= rowStart; i--) 
                {
                    if(count!=m*n)
                    {
                        result.push_back(matrix[i][columnStart]);
                        count++;
                    }
                }
                columnStart++;
            }
            // i++;
        }
        return result;
    }
};

int main()
{
    int n, m, a;
    cin >> n >> m;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            temp.push_back(a);
        }
        matrix.push_back(temp);
    }
    Solution s;
    vector<int> result = s.spiralOrder(matrix);
    for (unsigned int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

// 3 3 1 2 3 4 5 6 7 8 9
// 1 2 3 201378567 335596294 3 2 1 7 4
// 4 4 1 2 3 4 12 13 14 5 11 16 15 6 10 9 8 7
// 3 4 1 2 3 4 5 34 7 8 9 10 11 12