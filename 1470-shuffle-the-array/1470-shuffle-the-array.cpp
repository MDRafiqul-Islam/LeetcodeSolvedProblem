class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i, x, y;
        vector<int> temp;
        for(i = 0; i < nums.size(); i++){
            x = nums[i];
            y = nums[i + n];
            temp.push_back(x);
            temp.push_back(y);
            if(i == n - 1)
                break;
        }
        return temp;
    }
};