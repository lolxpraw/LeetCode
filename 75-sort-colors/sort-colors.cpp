class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int temp=0;
        for (int i=0; i<n;i++){
            int max_id= 0;
            for (int j=1; j<n-i; j++){
                if(nums[max_id]<nums[j]) {
                    max_id = j;
                }
            }
            temp = nums[n-i-1];
            nums [n-i-1] = nums[max_id];
            nums[max_id] = temp; 
        }   
    }     
};