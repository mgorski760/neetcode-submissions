class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, set<size_t> > values;
        set<size_t> index;
        vector<int> result;
        for(size_t i = 0; i < nums.size(); i++){
            values[nums.at(i)].insert(i);
        }

        for(auto [k,v]: values){
            if(values.count(target - k) == 1){
                for(size_t j : values.at(target-k)){
                    index.insert(j);
                }
                for(size_t j : v){
                    index.insert(j);
                }
                for(auto i : index){
                    result.push_back(i);
                }
                return result;
            }
        }
        return result;
    }
};
