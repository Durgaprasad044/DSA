class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0, right = 1;

        while (arr[left] < arr[right]) {
            left++;
            right++;
        }

        return left;
    }
};