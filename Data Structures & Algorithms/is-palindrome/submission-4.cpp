class Solution {
public:
    bool isPalindrome(string s) {
        //Iterate through s, inputing it into a string with only alphas
        //Iterate in reverse for another value;
        
        int l = 0;
        int r = s.length() -1;
        while(l < r){
            while(l < r && !isAlphaNum(s[l])){
                l++;
            }
            while(r > l && !isAlphaNum(s[r])){
                r--;
            }
            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    bool isAlphaNum(char s){
        return isdigit(s) || isalpha(s);
    }
};
