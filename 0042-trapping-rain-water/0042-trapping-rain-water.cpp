class Solution {
public:
    int trap(vector<int>& height) {
       
       int n = height.size();
       int water = 0;
       int left = 0;
       int leftmax = INT_MIN;
       int right = n-1;
       int rightmax = INT_MIN;

       while(left<right){
        leftmax = max(leftmax,height[left]);
        rightmax=max(rightmax,height[right]);
        water+=(leftmax<rightmax)?leftmax-height[left++]: rightmax-height[right--];
       }
       return water;
    }
};