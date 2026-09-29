class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = 0;
        int max = 0;
        int prefix[height.size()];
        int suffix[height.size()];

        for(int i = 0; i < height.size(); i++){
            int curr = height.at(i);
            if(curr > max){
                max = curr;
                prefix[i] = max;
            } else {
                prefix[i] = max;
            }
        }

        max = 0;

        for(int i = height.size()-1; i >= 0; i--){
            int curr = height.at(i);
            if(curr > max){
                max = curr;
                suffix[i] = max;
            } else {
                suffix[i] = max;
            }
        }

        int result = 0;

        for(int i = 0; i < height.size(); i++){
            int curr = min(prefix[i], suffix[i]) - height[i];
            if (curr > 0){
                result += curr;
            }
        }
        return result;
    }
};
