class Solution {
public:
    bool isPalindrome(int x) {
        long revese = 0;
        int original_num = x;

        while(x>0){
            int r = x%10;

            if (revese > LLONG_MAX / 10) {
                return false;
            }
            revese = (revese*10) + r;
            x = x/10;
        }
        if(revese == original_num){
            return true;
        }else{
            return false;
        }
        
    }
};