class Solution {
public:
int removeDuplicates(vector<int>& nums){
    int k = 1;
    for(int i=1; i<nums.size(); i++){
        if(nums[i] != nums[i-1]){
            nums[k] = nums[i];
            k = k+1;
        }
    }
    return k;
}
    
};



































// int removeDuplicates(vector<int>& nums){
//         int n = nums.size();
//         int unique = 0;
//         int j = 0
//         for(int i = 1; i<n; i++){
//             if(nums[i] == nums[j]){
//                 arr[i]
//             }else{
//                 unique++;
//             }
//         }
//         return {unique, nums}; 
//     } 