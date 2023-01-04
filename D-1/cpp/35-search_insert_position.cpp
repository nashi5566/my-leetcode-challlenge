class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid = 0;

        while(left <= right) {
            if (target == nums[mid]) return mid;
            else if (target < nums[mid]) {
                right = mid - 1;
                mid = (left + right)/2;
            } else {
                left = mid + 1;
                mid = (left+right)/2;
            }
        }

        return left;
    }
};
