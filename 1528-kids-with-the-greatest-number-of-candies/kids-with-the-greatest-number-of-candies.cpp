class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxkeo = 0; // So luong keo lon nhat trong mang
        // Tim so luong keo lon nhat trong mang do
        for(int keo : candies){
            maxkeo = max(maxkeo, keo);
        }
        // So sanh voi so keo lon nhat
        vector<bool> result;
        for(int keo : candies){
            result.push_back(keo + extraCandies >= maxkeo);
        }

    return result;
    }
};