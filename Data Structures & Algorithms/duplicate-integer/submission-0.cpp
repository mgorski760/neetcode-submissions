class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> seen;

        for(auto i : nums){
            if(seen.count(i) == 1){
                return true;
            } else {
                seen.insert(i);
            }
        }
        return false;
    }
};