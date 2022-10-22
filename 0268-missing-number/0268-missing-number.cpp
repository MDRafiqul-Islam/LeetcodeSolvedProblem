class Solution {
public:
    int missingNumber(vector<int>& num) {
       int i;
        int sum = 0, sum1 = 0;
        for(i = 0; i <= num.size(); i++)
        {
            sum = sum + i;
        }
        for(i = 0; i <= num.size() - 1; i++){
            sum1 = sum1 + num[i];
        }
        sum = sum - sum1;
        return sum;
    }
};