class Solution {
public:
    int numberOfMatches(int n) {
        int mat, sum = 0;
        while(n != 1)
        {
            if(n % 2 == 0)
            {
                mat = n / 2;
                sum = sum + mat;
                n = n / 2;
            }
            else
            {
                mat = (n -1)/ 2;
                sum = sum + mat;
                n = ((n -1)/ 2) + 1;
            }
        }
        return sum;
    }
};