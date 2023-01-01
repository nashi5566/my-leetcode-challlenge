class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot = 0;
        int left = 0;
        int right = nums.size()-1;
        int index = 0;

         // the 1st update

        while(left <= right){
            update(pivot, index, left, right, nums);
            if (target == pivot) {
                return index;
            } else if (target < pivot) {
                right = index - 1;
            } else if (target > pivot) {
                left = index +1;
            }
        }

        return -1;
    }

    void update(int &p, int &i, int l, int r, vector<int>& nums){
        int s = l + r;
        if(s%2==0) {
            i = s/2;
            p = nums[i];
        } else {
            i = (s+1)/2;
            p = nums[i];
        }
    }
};
