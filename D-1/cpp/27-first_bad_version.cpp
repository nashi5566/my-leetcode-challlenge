// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int left = 1, right = n;
        long long int mid = 0;
        while(left <= right){
            if (isBadVersion(mid)) {
                right = mid - 1;
                mid = (left + right)/2;
            } else {
                left = mid + 1;
                mid = (left + right)/2;
            }
        }

        return left;
    }
};
