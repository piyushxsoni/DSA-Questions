class Solution {
public:
    bool isVowels(char C){
        char c = tolower(C);
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }

    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(!isVowels(s[i])) i++;
            else if(!isVowels(s[j])) j--;
            else{
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};