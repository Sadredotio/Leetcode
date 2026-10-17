class Solution {
public:
    bool solve(int index, vector<int>&nums, int target, int sum, vector<vector<int>>&dp){
        int n = nums.size();

        if(sum == target){
            return true;
        }

        if(sum > target )return false;
        if(index >= n) return false;
        if (dp[index][sum] != -1)
            return dp[index][sum];

        bool inc = solve(index+1, nums, target, sum+nums[index], dp);
        bool exc = solve(index+1, nums, target, sum, dp);

        return dp[index][sum] = inc || exc;

    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }

        if(sum %2 !=0){
            return false;
        }

        int target = sum/2;
        vector<vector<int>>dp(n, vector<int>(target+1, -1));
        return solve(0, nums, target, 0, dp);
    }
};