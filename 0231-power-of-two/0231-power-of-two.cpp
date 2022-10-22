class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i;
        for(i = 0; i <= n/2; i++)
        {
            if((pow(2, i)) == n)
            {
                return true;
                break;
            }
            
            if((pow(2, i)) > n)
            {
                break;
            }
        }
        return false;
    }
};