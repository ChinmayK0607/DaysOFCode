

/* 
problem statement -> 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/ 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        //sort(nums.begin(),nums.end());
        while(s<e){
            int sum = nums[s] + nums[e];
            if(sum < target){
                s++;
                e = n-1;
            }
            else if(sum == target){
                return {s,e};
            }
            else if(s != e-1){
                e--;
            }
           
        }
         return{-1,-1};
    }
};
