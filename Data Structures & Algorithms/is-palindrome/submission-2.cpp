class Solution {
public:
    bool isPalindrome(string s) {
        //Iterate through s, inputing it into a string with only alphas
        //Iterate in reverse for another value;
        
        string n = "";
        string r = "";

        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])){
                n += toupper(s[i]);
            } else if (isdigit(s[i])){
                n += s[i];
            }
        }

        for(int i = s.size()-1; i > -1; i--){
            if(isalpha(s[i])){
                r += toupper(s[i]);
            }else if (isdigit(s[i])){
                r += s[i];
            }
        }

        

        if(n == r ){
            return true;
        } else {
            return false;
        }
    }
};
