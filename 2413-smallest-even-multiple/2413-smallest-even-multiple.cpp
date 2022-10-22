class Solution {
public:
    int smallestEvenMultiple(int n) {
        int mul ;
        if(n % 2 == 0)
            return n;
        
        mul = n * 2;
        
        return mul;
    }
};