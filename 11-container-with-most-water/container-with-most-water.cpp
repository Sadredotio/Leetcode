class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int s = 0;
        int e = n-1;

        while(s < e){
           int b = min(height[s], height[e]);
           int area = b*(e-s);
           ans=max(ans, area);
           if(height[s]< height[e]){
            s++;
           }else {
            e--;
           }
        }
        return ans;
    }
};