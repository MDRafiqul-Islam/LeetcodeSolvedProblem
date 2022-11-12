class Solution {
public:
    int singleNumber(vector<int>& num) {
        int i, res = 0;
        for(i = 0; i < num.size(); i++)
        {
            res = res ^ num[i];
        }
        return res;
    }
};