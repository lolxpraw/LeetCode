class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findBound(nums, target, true);
        
        // Nếu không tìm thấy phần tử đầu tiên, chắc chắn không có phần tử cuối
        if (first == -1) {
            return {-1, -1};
        }    
        int last = findBound(nums, target, false);
        return {first, last};
    }
    
private:
    int findBound(vector<int>& nums, int target, bool isFirst) {
        int left = 0, right = nums.size() - 1;
        int bound_pos = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                bound_pos = mid; // Ghi nhận vị trí
                
                // Dựa vào cờ isFirst để quyết định đi tiếp sang trái hay phải
                if (isFirst) {
                    right = mid - 1; 
                } else {
                    left = mid + 1;  
                }
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }  
        return bound_pos;
    }
};