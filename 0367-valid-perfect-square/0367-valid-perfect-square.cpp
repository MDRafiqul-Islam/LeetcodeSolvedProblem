class Solution {
public:
    bool isPerfectSquare(int num) {
        int i;
        
        for(i = 1; i <= num; i++)
        {
            if(i == sqrt(num))
                return true;
            
            if(i > sqrt(num))
                break;
        }
        return false;
    }
};