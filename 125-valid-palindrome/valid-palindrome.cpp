class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return false;
        int n = s.length();
        int st = 0, e =n-1;

        while(st <= e){
            while(st < e && !isalnum(s[st])) st++;
            while(st < e && !isalnum(s[e])) e--;

            if(tolower(s[st]) != tolower(s[e])){
                return false;
            }
            
            st++;
            e--;
        }

        return true;
    }
};