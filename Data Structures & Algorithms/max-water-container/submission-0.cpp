class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int max = 0;
        while(l < r){
            int min_wall = min(heights.at(l), heights.at(r));
            int result = min_wall * (r-l);
            if(result > max){
                max = result;
            }

            //left is bigger
            if(heights.at(l) > heights.at(r)){
                r--;
            } else {
                l++;
            }
        }
        return max;
    }
};
