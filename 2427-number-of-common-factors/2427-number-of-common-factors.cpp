class Solution {
public:
    int commonFactors(int a, int b) {
        int max = std::max(a, b);
        
        int i, c = 1;
        for(i = 2;i <= max; i++)
        {
            if(a % i == 0 && b % i == 0)
                c++;
        }
        return c;
    }
};