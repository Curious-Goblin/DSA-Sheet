#include<iostream>
#include<climits>
using namespace std;

// MY APPROACH
// TIME COMPLEXITY = O(LOG(N)) SPACE COMPLEXITY = O(1)

class Solution {
public:
    int reverse(int x) {
        long int a=x;
        long int r=0;
        while(a!=0)
        {
            r=r*10+(a%10);
            a=a/10;
        }
        if (r > INT_MAX || r < INT_MIN) {
        return 0; // indicate overflow
    }
        return r;
    }
};

int main(){
    int x;
    cin>>x;
    Solution s;
    int result=s.reverse(x);
    cout<<result;
    return 0;
}
