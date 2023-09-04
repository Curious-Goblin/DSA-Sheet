#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

/*
OPTIMAL SOLUTION
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int x=0;
       for(int l:nums){
           x^=l;
       }
       for(int i=0;i<=nums.size();i++){
           x^=i;
       }
       return x;
    }
};

*/

// MY APPROACH
// TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // auto it=max_element(nums.begin(),nums.end());
        int sum= accumulate(nums.begin(),nums.end(),0);
        int maxElement=nums.size();
        int missingElement= (((maxElement)*(maxElement+1))/2)-sum;
        return missingElement;
    }
};

int main(){
    int n;
    cin>>n;
    int a;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    Solution s;
    int result=s.missingNumber(nums);
    cout<<result;
    return 0;
}