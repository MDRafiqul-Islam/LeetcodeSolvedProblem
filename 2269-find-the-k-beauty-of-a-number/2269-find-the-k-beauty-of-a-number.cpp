class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        string s1;
        int i, c= 0;
        for(i = 0; i < s.size() - (k - 1); i++)
        {
            s1 = s.substr(i, k);
            if(std::stoi(s1) == 0)
                c = c;
            else
            {
            if(num % std::stoi(s1) == 0)
                c++;
            }
        }
        return c;
    }
};