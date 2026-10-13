class Solution {
public:
    int solve(vector<int>&nums, int idx, vector<int>&dp){
        int n = nums.size();
        if(idx >= n){
            return 0;
        }

        if (dp[idx] != -1) {
            return dp[idx];
        }

        int take = nums[idx] + solve(nums, idx+2, dp);
        int nottake = 0 + solve(nums, idx+1, dp);

        int temp = max(take, nottake);
        dp[idx] = temp;
        return dp[idx];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n, -1);
        int ans = solve(nums, 0, dp);
        return ans;
    }
};