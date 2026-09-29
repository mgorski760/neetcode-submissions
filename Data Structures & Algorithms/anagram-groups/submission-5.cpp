class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> m;
        for(int i = 0; i < strs.size(); i++){
            vector<int> count(26,0); //All casted as zero;
            string curr = strs.at(i);
            for(int j = 0; j < curr.size(); j++){
                count[curr.at(j)-'a']++;
            }
            
            string key = to_string(count[0]);
            for(int i = 1; i < 26; i++){
                key += ',' + to_string(count[i]);
            }
            m[key].push_back(curr);
        }

        for(auto i : m){
            result.push_back(i.second);
        }
        return result;
    }
};
