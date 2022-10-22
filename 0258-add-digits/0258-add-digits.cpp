class Solution {
public:
    int addDigits(int num) {
        long int temp, sum = 0;
        while(num > 9)
        {
            
            while(num != 0)
            {
                temp = num % 10;
                sum = sum + temp;
                num = num / 10;
            }
            num = sum;
            sum = 0;
        }
        return num;
    }
};