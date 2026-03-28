/*
    Cach giai toi uu -> sort mang nay, luc do mang sap xep se co su toi uu -> tim duoc max cua tong min 
*/
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()); // mang sort

        int sum = 0;
        // vi du mang da sort [3,6,8,9,11,15], vong lap for lay cac so 3,8,11 sau do cong lai (min)
        for(int i = 0;i < nums.size();i += 2){
            sum += nums[i]; 
        }
        return sum;
    }
};