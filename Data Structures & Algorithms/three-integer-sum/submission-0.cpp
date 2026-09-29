class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> output; 
        
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            int a = nums[i];
            if(i > 0 && a == nums[i-1]){
                continue;
            }
            int l = i+1;
            int r = nums.size() - 1;
            while(l < r){
                int threeSum = a + nums[l] + nums[r];
                if(threeSum < 0){
                    l++;
                } else if (threeSum > 0){
                    r--;
                } else {
                    output.push_back({a,nums[l], nums[r]});
                    l++;
                    r--;
                    while((nums[l] == nums[l-1]) && (l < r)){
                        l += 1;
                    }
                }
            }
        }
        return output;
    }
};
