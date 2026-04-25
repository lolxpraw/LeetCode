// giai thich vi du tu [3,6,7,11], h = 8 . Vi du k = 1 -> Thoi gian an cua Koko =  3 + 6 + 7 + 11 = 27 > 8. Bi bat
// k = 2 -> Thoi gian an cua Koko =  2 + 3 + 4 + 6 = 15 > 8. Bi bat
// k = 3 -> Thoi gian an cua Koko =  1 + 2 + 3 + 4 = 10 > 8. Bi bat
// k = 4 -> Thoi gian an cua Koko =  1 + 2 + 2 + 3 = 8 = 8. Vua du
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // tim max cua ham piles
        int left = 1;
        int right = 0;
        for(int p : piles){
            right = max(right,p);
        }
        int res = right;
        // Binary search 
        while(left <= right){
            int mid = left + (right - left)/2;
            if(timeChuoi(piles,h,mid)){
                res = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return res;
    }
private:
    bool timeChuoi(vector<int>& piles, int h, int k){
        long long hours =  0;
        for(int p : piles){
            hours = hours + (p + k - 1) / k;
        }
        return hours <= h;
    }
};
