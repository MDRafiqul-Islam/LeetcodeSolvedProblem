class Solution {
public:
    int heightChecker(vector<int>& height) {
        vector<int> expected;
        int i, c = 0;
        expected.assign(height.begin(), height.end());
        sort(expected.begin(), expected.end());
        
        for(i = 0; i < height.size(); i++)
        {
            if(height[i] != expected[i])
                c++;
        }
        return c;
    }
};