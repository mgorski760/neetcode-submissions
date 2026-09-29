class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //brute force
        vector<int> output(nums.size(), 1);
        for(int i = 0; i < nums.size(); i++){
            int curr = i;
            for(int j = 0; j < nums.size(); j++){
                if(j != curr){
                    output.at(curr) *= nums.at(j);
                }
            }
        }
        return output;
    }
};
