
#include<iostream>
#include<vector>
using namespace std;
    vector<int> rearrangeArray(vector<int>& nums);
int main(){

    vector<int> arr={1,2,3,4};
   cout << rearrangeArray(arr);
   return 0;
};
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int s=nums.size();
        for(int i=1;i<s-1;i++)
        {
            if((nums[i-1]<nums[i] && nums[i]<nums[i+1]) || (nums[i-1]>nums[i] && nums[i]>nums[i+1]))
                swap(nums[i],nums[i+1]);
        }
        return nums;
    }