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
        vector<int> sorted;
        for(int i : m){
            sorted.push_back(i);
        }
        
        int count = 0;
        int max = 0;
        for(int i = 0; i < sorted.size()-1; i++){
            int curr = sorted.at(i+1);
            int prev = sorted.at(i);
            if(prev+1 == curr){
                if(count == 0){
                    count += 2;
                } else {
                    count++;
                }
            } else {
                count = 0;
            }
            if(count > max){
                max = count;
            }
            prev = curr;
        }

        return max;
    }
};
