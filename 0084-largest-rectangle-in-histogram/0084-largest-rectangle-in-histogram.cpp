class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n, 0);
        vector<int> right(n, 0);
        int ans = 0;

        stack<int> s;

        // left nearest 
        for(int i=0; i<n; i++){
            while(s.size() > 0 && heights[s.top()] >= heights[i]){
                s.pop();
            }
            if(s.empty()){
                left[i] = -1;
            }
            else{
                left[i] = s.top();
            }
            s.push(i);
        }

        while(!s.empty()){
            s.pop();        
        }

        // right neareset
        for(int i = n-1; i >= 0; i--){
            while(s.size() > 0  && heights[s.top()] >= heights[i]){
                s.pop();
            }

            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        for(int i = 0; i<n; i++){
            int width = right[i] - left[i] - 1;
            int currArea = heights[i] * width;
            ans = max(ans, currArea);
        }
        return ans;
    }
};