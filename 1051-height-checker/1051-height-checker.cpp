class Solution {
public:
    int heightChecker(vector<int>& height) {
        vector<int> expected;
        int i, j, min, c = 0;
        expected.assign(height.begin(), height.end());
        for(i = 0; i < expected.size(); i++){
            for(j = i + 1; j < expected.size(); j++){
                if(expected[i] > expected[j])
                {
                    min = expected[j];
                    expected[j] = expected[i];
                    expected[i] = min;
                }  
            }
        }
        
        for(i = 0; i < height.size(); i++)
        {
            if(height[i] != expected[i])
                c++;
        }
        return c;
    }
};