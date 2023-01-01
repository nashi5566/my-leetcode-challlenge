class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int index = 0;

         // the 1st update

        while(left <= right){
            if (target == nums[index]) {
                return index;
            } else if (target < nums[index]) {
                right = index - 1;
                index = (left+right)/2;
            } else if (target > nums[index]) {
                left = index +1;
                index = (left+right)/2;
            }
        }

        return -1;
    }
};
