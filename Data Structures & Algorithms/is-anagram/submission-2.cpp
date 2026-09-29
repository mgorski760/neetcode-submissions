class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }
        
        map<char, int> s_seen;
        map<char, int> t_seen;
        for(int i = 0; i < s.size(); i++){
            s_seen[s.at(i)]++;
        }

        for(int i = 0; i < t.size(); i++){
            t_seen[t.at(i)]++;
        }

        for(auto i : s_seen){
            if(t_seen.count(i.first) == 0){
                return false;
            }

            if(t_seen.at(i.first) != i.second){
                return false;
            }
        }
       return true;
    }
};
