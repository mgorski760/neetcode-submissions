class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> values;
        vector<int> result;
        for(int i : nums){
            values[i]++;
        }

        set<int> seen;
        for(int i = 0; i < k; i++){
            int topCount = -1;
            int topVal = -1001;
            for(auto i : values){
                if(seen.count(i.first) == 1){
                    continue;
                }
                if(i.second > topCount){
                    topCount = i.second;
                    topVal = i.first;
                }
            }
            if(topCount != -1 && topVal != -1001){
                result.push_back(topVal);
                seen.insert(topVal);
            } 
        }
        return result;
    }
};
