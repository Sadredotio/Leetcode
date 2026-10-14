class Solution {
public:
    void solve(vector<int>& candidates, int idx, int target, vector<int>&temp, vector<vector<int>>&ans){
        int n = candidates.size();
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        if(target < 0 || idx == n){
            return;
        }

        temp.push_back(candidates[idx]);
        solve(candidates, idx, target - candidates[idx], temp, ans);
        temp.pop_back();

        solve(candidates, idx+1, target, temp, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(candidates, 0, target, temp, ans);
        return ans;
    }
};