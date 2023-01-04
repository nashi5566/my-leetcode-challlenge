class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());

        /*
        for (int i = 0; i < k; i++){
            int get = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), get);
        }
        */

    }
};
