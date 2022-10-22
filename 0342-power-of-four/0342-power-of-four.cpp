class Solution {
public:
    bool isPowerOfFour(int n) {
             int i;
        for(i = 0; i <= n/2; i++)
        {
            if(pow(4, i) == n)
            {
                return true;
                break;
            }
            if(pow(3, i) > n)
                break;
        }
        return false;
    }
};