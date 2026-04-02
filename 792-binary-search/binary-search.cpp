class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        for(int i = 0;i < n;i++){
            if(target == nums[i]) return count;
            else count++;
        }
        return -1; 
    }
};