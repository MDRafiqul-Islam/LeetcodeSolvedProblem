class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, c = 0;
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                c++;
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        for(i = 1; i <= c; i++)
        {
            nums.push_back(0);
        }
    }
};