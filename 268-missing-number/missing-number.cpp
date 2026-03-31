class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int tong1 = n * (n + 1) / 2;
        int tong2 = 0;
        for(int i = 0; i < n;i++){
            tong2 += nums[i];
        }
        return tong1 - tong2;
    }
};