class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int i, j, max= 0;
        vector<int> a;
        vector<int> b;
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0)
                a.push_back(nums[i]);
            else
                b.push_back(nums[i]); 
        }
        for(i = 0; i < a.size(); i++)
        {
            for(j = 0; j < b.size(); j++)
            {
                if(a[i] == - b[j])
                {
                    if(max < a[i])
                        max = a[i];
                }
            }
        }
        if(max > 0)
            return max;
        return -1;
    }
};