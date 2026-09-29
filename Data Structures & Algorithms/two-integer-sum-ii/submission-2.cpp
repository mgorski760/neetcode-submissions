class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> result = {};
        for(int i = 0; i < numbers.size(); i++){
            for(int j = 0; j < numbers.size(); j++){
                if(i < j && ((numbers[i] + numbers[j]) == target)){
                    result.push_back(i+1);
                    result.push_back(j+1);
                    break;
                }
            }
            if(result.size() != 0){
                break;
            }
        }
        return result;
    }

};
