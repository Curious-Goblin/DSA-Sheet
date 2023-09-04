#include<bits/stdc++.h>
#include<vector>
using namespace std;

/*
OPTIMAL APPROACH
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }
        //this condition is used for cases like [2,1,3,4]
        if(nums[n-1]>nums[0]){
            cnt++;
        }
        return cnt<=1;
    }
};
*/

/*
MY APPROACH
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
*/
class Solution {
public:
    bool check(vector<int>& nums) {
        unsigned count=0;
        for(unsigned i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]>=nums[i])
            {
                count++;
            }

        }
        if((nums[0]>=nums[nums.size()-1])&&(count==nums.size()-2))
        {
            return true;
        }
        else if(count==nums.size()-1)
        {
            return true;
        }
    return false;
    }
};

int main(){
    int n,a;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    Solution s;
    bool result=s.check(nums);
    cout<<result;
    return 0;
}