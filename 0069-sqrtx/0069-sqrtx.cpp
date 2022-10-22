class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;
        long int lb = 0, ub = x / 2, res;
        while(lb <= ub)
        {
            long int mid = (lb + ub) / 2;
            long int ans = mid * mid;
            if( ans == x)
                return mid;
            
            if( ans <= x)
            {
                lb = mid + 1;
                res = mid;
            }
            else
            {
                ub = mid - 1;
            }
            
        }
        return res;
    }
};