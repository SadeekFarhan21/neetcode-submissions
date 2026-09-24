class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int index = -1;
        bool found = false;
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target){
                index = mid;
                found = true;
                break;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        if(found) return index;
        else return index;
    }
};
