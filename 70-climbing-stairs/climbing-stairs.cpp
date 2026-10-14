class Solution {
public:
    int solve(int n, int src, int dest, vector<int>&dp){
        if(src == dest){
            return 1;
        }

        if(src > dest){
            return 0;
        }
        if(dp[src] != -1){
            return dp[src];
        }
        int temp1 = solve(n, src+1, dest, dp);
        int temp2 = solve(n, src+2, dest, dp);
        return dp[src] = temp1+temp2;

    }
    int climbStairs(int n) {
        vector<int>dp(n+1, -1);
        return solve(n, 0, n, dp);
    }
};