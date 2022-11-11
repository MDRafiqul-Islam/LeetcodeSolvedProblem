class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i, c= 0;
        for(i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums [i + 1])
            {
                nums[i] = nums[i] * 2;
                nums[i+1] = 0;
            }
        }
        vector<int> a;
        a = nums;
        for(i = 0; i < a.size(); i++)
        {
            if(a[i] == 0)
            {
                c++;
                a.erase(a.begin() + i);
                i--;
            }
        }
        for(i = 1; i <= c; i++)
        {
            a.push_back(0);
        }
        return a;
    }
};