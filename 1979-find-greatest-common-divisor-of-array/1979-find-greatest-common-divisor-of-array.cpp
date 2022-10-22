class Solution {
public:
    int findGCD(vector<int>& nums) {
         int max = nums[0], min = nums[0], i, mul;
        for(i = 1; i < nums.size(); i++)
        {
            if(max < nums[i])
                max = nums[i];
            if(min > nums[i])
                min = nums[i];
        }
        for(i = 1; i <= max; i++)
        {
            if(max % i == 0 && min % i == 0)
                mul = i;
        }
        return mul;
    }
};