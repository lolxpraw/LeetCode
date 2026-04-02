/*
Su dung binary search de giai bai nay
*/
class Solution {
public:
    int mySqrt(int x) {
        int left = 0,right = x;
        int kq =  0;
        
        while(left <= right){
            long long mid = (left + right) / 2;
            if(mid * mid <= x){
                kq = mid;
                left = mid + 1;
            } else right = mid - 1;
        }
        return kq;
    }
};