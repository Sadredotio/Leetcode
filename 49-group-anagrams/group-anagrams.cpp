class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>>mp;

        for(string ch : strs){
            string temp = ch;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(ch);
        }

        for(auto & it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};