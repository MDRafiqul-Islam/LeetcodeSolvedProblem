class Solution {
public:
    int countOdds(int low, int high) {
        int i = low, c = 0;
        for(i ; i <= high; i++)
        {
            if(i % 2 != 0)
                c++;
        }
        return c;
    }
};