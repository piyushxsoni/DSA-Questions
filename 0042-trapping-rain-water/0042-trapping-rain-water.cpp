class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n,0);
        vector<int> rmax(n,0);


        lmax[0] = height[0];
        rmax[n-1] = height[n-1]; 
        for(int i=1; i<n; i++){
            lmax[i] = max(lmax[i-1], height[i]);
        }

        for(int i=n-2; i>=0; i--){
            rmax[i] = max(rmax[i+1], height[i]);
        }
       
       int ans = 0;
       for(int i=0; i<n; i++){
        ans += min(lmax[i], rmax[i]) - height[i];
       }
       return ans;
    }
};





















// int n = height.size();
//        int water = 0;
//        int left = 0;
//        int leftmax = INT_MIN;
//        int right = n-1;
//        int rightmax = INT_MIN;

//        while(left<right){
//         leftmax = max(leftmax,height[left]);
//         rightmax=max(rightmax,height[right]);
//         water+=(leftmax<rightmax)?leftmax-height[left++]: rightmax-height[right--];
//        }
//        return water;