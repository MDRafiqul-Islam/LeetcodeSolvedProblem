class Solution {
public:
    int totalMoney(int n) {
        int k = 1, i, sum = 0;
        for(i = 1; i <= n; i++)
        {
            sum = sum + k;
            k++;
            if(i % 7 == 0)
                k = k - 6;
        }
        return sum;
    }
};