class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int temp = 0;
        for(int v=0; v<n; v++){
        for(int i = 0;i < n;i++){
            if((i+1<n)&&nums[i] > nums[i + 1]){
                temp = nums[i + 1];
                nums[i + 1] = nums[i];
                nums[i] = temp;
            }
        }
    }
    }
};