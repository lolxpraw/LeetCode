/* 
Boyer-Moore Voting
Khi gặp 1 số cùng 
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp = 0;
        int count =  0;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            if(count == 0) temp = nums[i];
            if(nums[i] == temp){
                count++;
            } else {
                count--;
            }
        }
        return temp;
    }
};