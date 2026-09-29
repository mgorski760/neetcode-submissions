class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> unique;
        int best = 0;
        int count = 0;
        int l = 0;
        int r = 0;
        while(r < s.size()){
            char curr = s[r];
            if(unique.count(curr) == 1){
                while(l < r){
                    if(s[l] == curr){
                        l++;
                        break;
                    } else {
                        unique.erase(s[l]);
                        l++;
                    }
                }
            } else {
                unique.insert(curr);
            }
            r++;
            count = unique.size();
            best = max(best, count);
        }
        return best;
    }
};
