class Solution {
public:
    int checkEvenDigit(int num){
        int count;
        while(num > 0){
            num = num / 10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            int x = checkEvenDigit(nums[i]);
            if(x % 2 == 0){     
                count++;
            }
        }
        return count;
    }
};