#include <vector>
#include <iostream>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
        for (auto& it: nums){
            it = it * it;
        }

        for (int i = 0; i < nums.size() - 1; i++){
            for (int j = 0; j < nums.size() - i - 1; j++){
                if(nums[j] > nums[j+1]){
                    swap(nums[j], nums[j+1]);
                }
            }
        }

    return nums;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = a;
}

int main(){
    vector<int> test = {-7,-3,2,3,11};
    sortedSquares(test);
    for(auto& it: test){
        cout << it << "\n";
    }
    return 0;
}

/***
 class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for (auto& it: nums){
            ans.push_back(it*it);
        }

        for (int i = 0; i < ans.size() - 1; i++){
            for (int j = 0; j <ans.size() - i - 1; j++){
                if(ans[j] > ans[j+1]){
                    swap(ans[j], ans[j+1]);
                    cout << ans[j] << " " << ans[j+1] << "\n";
                }
            }
        }

        return ans;
    }

    void swap(int &a, int &b){
        int tmp = a;
        a = b;
        b = a;
    }
};
 ***/
