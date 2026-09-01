class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater = 0;
        int lp = 0; 
        int rp = n-1;
        while(lp<rp){
                int w = rp-lp;
                int ht = min(height[lp], height[rp]);
                int currntWater = w * ht;
                maxWater = max(maxWater, currntWater);
                height[lp] < height[rp] ? lp++ : rp-- ;
        }
        return maxWater;
    }
};