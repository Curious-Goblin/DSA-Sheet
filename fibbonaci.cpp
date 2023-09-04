#include<iostream>
using namespace std;

/*
OPTIMAL APPROACH
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
int fib(int n) {
        if (n == 0 || n == 1)
            return n;
        int prev2 = 0, prev = 1;
        int f = 0;
        for (int i = 2; i <= n; i++) {
            f = prev + prev2;
            prev2 = prev;
            prev = f;
        }
        return f;
    }
    

/*
MY APPROACH
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
*/

class Solution {
public:
    int fib(int n) {
        int arr[n+1];
        if(n==0)
        {
            return 0;
        }
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<n+1;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n];

    }
};

int main()
{
    int n;
    cin>>n;
    Solution s;
    int result = s.fib(n); 
    cout<<result;
    return 0;
}