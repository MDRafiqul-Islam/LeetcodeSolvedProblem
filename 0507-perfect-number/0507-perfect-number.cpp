class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i, sum = 0;
        vector<int> a;
        for(i = 1; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                a.insert(a.end(),{i});
            }
        }
        for(i = 0; i < a.size(); i++)
        {
            sum = sum + a[i];
           
        }
         if(sum == num)
            {
                return true;
            }
         return false;
    }
};