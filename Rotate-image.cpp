#include <iostream>
#include <vector>
using namespace std;

/* TIME COMPLEXITY = O(N*N) SPACE COMPLEXITY = O(1)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        for(int i=0;i<row; i++){
            for(int j=0; j<=i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
*/

// TIME COMPLEXITY = O(N*N) SPACE COMPLEXITY = O(N*N)

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int i = matrix.size();
        int j = matrix[0].size();
        vector<vector<int>> matrix1;
        for (int a = 0; a < i; a++)
        {
            vector<int> temp;
            for (int b = j - 1; b >= 0; b--)
            {
                temp.push_back(matrix[b][a]);
            }
            matrix1.push_back(temp);
        }
        for (int a = 0; a < i; a++)
        {
            for (int b = 0; b < j; b++)
            {
                matrix[a][b] = matrix1[a][b];
            }
        }
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
    s.rotate(matrix);
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
// 3 3 1 2 3 4 5 6 7 8 9