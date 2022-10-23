class Solution {
public:
    int sumBase(int n, int k) {
        int temp, i;
        vector<int> a;
        while(n != 0)
        {
            temp = n % k;
            n = n / k;
            a.push_back(temp);
        }
        n = 0;
        for(i =  a.size() - 1; i >= 0; i--)
        {
            n = n * 10 + a[i];
        }
        temp = 0;
        while(n != 0)
        {
            temp = temp + (n % 10);
            n = n / 10;
        }
        return temp;
    }
};