class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0){
            return 0;
        } 

        set<int> m;
        for(int i : nums){
            m.insert(i);
        }

        if(m.size() == 1){
            return 1;
        }

        int count = 0;
        int res = 0;
        for(int i : m){
            if(m.count(i+1) == 1){
                if(count == 0){
                    count = 2;
                } else {
                    count++;
                }
            } else {
                count = 0;
            }
            res = max(count, res);
        }
        return res;
        
    }
};
