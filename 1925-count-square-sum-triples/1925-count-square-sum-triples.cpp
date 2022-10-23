class Solution {
public:
    int countTriples(int n) {
        int a, b, c, count = 0;
        for(a = 1; a <= n; a++){
            for(b = 1; b <= n; b++){
                c = sqrt((a * a) + (b * b));
                if(c <= n && pow(c, 2) == pow(a, 2) + pow(b, 2))
                    count ++;
            }
        }
        return count;
    }
};