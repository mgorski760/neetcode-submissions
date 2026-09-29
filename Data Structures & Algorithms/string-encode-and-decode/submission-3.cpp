class Solution {
public:

    string encode(vector<string>& strs) {
        stringstream ss;
        for(string i : strs){
            ss << i << "-";
        }

        return ss.str();
    }

    vector<string> decode(string s) {

        stringstream ss(s);
        string curr;
        vector<string> result;
        while(getline(ss, curr, '-')){
            result.push_back(curr);
        }
        return result;
    }
};
