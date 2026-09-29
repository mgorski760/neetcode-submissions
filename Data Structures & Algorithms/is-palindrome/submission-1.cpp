class Solution {
public:
    bool isPalindrome(string s) {
        //Iterate through s, inputing it into a string with only alphas
        //Iterate in reverse for another value;
        stringstream normal;
        stringstream reverse;
        string n;
        string r;

        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])){
                normal << toupper(s[i]);
            } else if (isdigit(s[i])){
                normal << s[i];
            }
        }

        for(int i = s.size()-1; i > -1; i--){
            if(isalpha(s[i])){
                reverse << toupper(s[i]);
            }else if (isdigit(s[i])){
                reverse << s[i];
            }
        }

        n = normal.str();
        r = reverse.str();

        if(n == r ){
            return true;
        } else {
            return false;
        }
    }
};
