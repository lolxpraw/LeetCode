class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(); // đặt biến thành kích thước của mảng
        vector<int> kq(n); // tạo một mảng mới 

        for(int i = 0;i < n;i++){
            nums[i] = abs(nums[i]) * abs(nums[i]);
        }
        sort(nums.begin(), nums.end());

        return nums;
    }
};