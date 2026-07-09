class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> answer(nums.size());
        answer[0] = nums[0];
        if(nums.size() == 1){
            return answer[0];
        }
        answer[1] = max(nums[0], nums[1]);
        if(nums.size() == 2){
            return answer[1];
        }
        for(int i = 2; i < nums.size(); i++){
            answer[i] = max(answer[i - 2] + nums[i], answer[i - 1]);
        } 
        return answer[nums.size() - 1];
    }
};
