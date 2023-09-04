#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*
DUTCH NATIONAL FLAG ALGORITHM : IT IS USED WHEN WE HAVE THREE DISTINCT NUMBERS TO SORT THE VECTOR
TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

MY APPROACH
TIME COMPLEXITY = VARIES BETWEEN O(N) AND O(log(N)) SPACE COMPLEXITY  = O(1)
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
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
    s.sortColors(nums);
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}