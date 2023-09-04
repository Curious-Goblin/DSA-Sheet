#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*  
OPTIMAL APPROACH
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1) return;
        int l=0, r=0;
        while(r<nums.size()){
            if(nums[r]!=0){
                swap(nums[l],nums[r]);
                l++;
                
            }
            r++;
        }
    }
};
*/


// MY APPROACH
// TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(unsigned int i=0;i<nums.size();i++){
            if(nums[i]==0)
            {
                count++;
            }
        }
        auto new_end=remove(nums.begin(), nums.end(), 0);
        nums.erase(new_end,nums.end());
        for(int i=1;i<=count;i++)
        {
            nums.push_back(0);
        }
    }
};

int main(){
    int n,a;
    vector<int> nums;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    Solution s;
    s.moveZeroes(nums);
    for(unsigned int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}