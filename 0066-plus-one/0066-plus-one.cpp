class Solution {
public:
    vector<int> plusOne(vector<int>& digit) {
        int length = digit.size() - 1;
        for(length; length >= 0; length--)
        {
            if(digit[length] < 9)
            {
                digit[length]++;
                break;
            }
            
            else
            {
                digit[length] = 0;
                if(length == 0)
                {
                    digit.push_back(0);
                    digit[0] = 1;
                }
            }
            
        }
        return digit;
    }
};