class Solution {
public:
    bool isPowerOfThree(int n) {
        int i;
        for(i = 0; i <= n/2; i++)
        {
            if(pow(3, i) == n)
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