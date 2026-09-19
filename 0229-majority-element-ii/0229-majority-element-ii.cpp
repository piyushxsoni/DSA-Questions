class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        map<int, int> um;
        vector<int> ans;
        for(int i:arr){
            um[i]++;
        }
        int n = arr.size();
        sort(arr.begin(),arr.end());

        for(auto i:um){
            if(i.second > n/3)
            ans.push_back(i.first);
        }
        return ans;
        
    }
};