class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> a;
      for(int i = num.size() - 1; i >= 0; i--)
      {
          k = k + num[i];
          int c = 0;
          num [i] = (k % 10) + c;
          k = k / 10;
          if(num[i] > 9)
          {
              c = num[i] / 10;
              num[i] = num[i] % 10; 
          }
      }
        if (k > 0)
        {
            if(k > 9)
            {
                while(k != 0)
                {
                    num.insert(num.begin(), k % 10);
                    k = k / 10;
                }
            }
            else
                num.insert(num.begin(), k);
            
        }
        return num;
    }
};