class Solution {
public:
    bool isPalindrome(int x) {
	
        string s = to_string(x);
        int str = 0;
        int fin = s.length() - 1;
        
        while(str < fin)
        {
            if(s[str++] != s[fin--])
                return false;   
        }
        return true;
    }
};