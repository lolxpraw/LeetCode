/*
Idea: tim max cua mang, neu tim thay -> tim max thu 2 -> tim max thu 3
Sort -> lay mang thu 3


*/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 1; // max đầu tiên
        int n = nums.size();

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] != nums[i + 1]) {
                count++;
                if (count == 3) {
                    return nums[i];
                }
            }
        }

        // nếu không đủ 3 số khác nhau
        return nums[n - 1];
    }
};