class Solution {
public:
    void solve(string digits, string output, string s[], int idx, vector<string>&ans){
        int n = digits.length();
        if(idx >= n){
            ans.push_back(output);
            return;
        }

        int num = digits[idx] - '0';
        string temp = s[num];

        for(int i=0; i<temp.size(); i++){
            output.push_back(temp[i]);
            solve(digits, output, s, idx+1, ans);
            output.pop_back();
        }

    }

    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string>ans;
        int idx = 0;
        if (digits.empty()) {
            return ans;
        }

        string output = "";
        string s[10] = {"", "", "abc", "def", "ghi","jkl", "mno","pqrs","tuv","wxyz"};
        solve(digits,output, s, 0, ans);  
        return ans;  
    }
};