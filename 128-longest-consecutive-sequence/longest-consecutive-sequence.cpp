class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int>st;

        for(int num : nums){
            st.insert(num);
        }

        for(int it : st){
            if(st.find(it -1) == st.end()){
                int cnt = 1;
                int curr = it;

            while(st.find(curr + 1) != st.end()){
                cnt++;
                curr++;
            }
            ans = max(ans, cnt);
            }
        }
       return ans;
    }
};