class Solution {
public:
    bool sumOfNumberAndReverse(int num) {  
        for(int i = num / 2 ; i <= num; i++)

            if(i + rev(i) == num)
                return true;
            return false;
       
    }
        
          private:
        int rev(int num)
        {
            int rev = 0;
            while(num > 0)
            {
                rev = (rev * 10) + (num %  10);
                num = num / 10;
            }
            return rev;
        }
};
