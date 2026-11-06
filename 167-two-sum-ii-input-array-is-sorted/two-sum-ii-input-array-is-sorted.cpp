class Solution {
public:
    vector<int> twoSum(vector<int>& members, int target) {
        int n = members.size();
        int s = 0, e = n-1;
        while( s<e){
            if(members[e]+members[s]==target){
                return {s+1, e+1};
            } else if(members[s]+members[e] < target){
                s++;
            }else{
                e--;
            }
        }
        return {};
    }
};