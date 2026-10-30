class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>freq(255, 0);
        int ans = 0;
        int j = 0;

        for(int i=0; i<s.length(); i++){
            freq[s[i]]++;
            while(freq[s[i]] > 1){
                freq[s[j]]--;
                j++;
            }

            ans = max(ans, i-j+1);
        }
        return ans;
    }
};