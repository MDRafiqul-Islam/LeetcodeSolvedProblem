class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int  c = 0, empty = numBottles, extra = 0;
        if(numBottles < numExchange)
            c = numBottles;
        while(empty >= numExchange)
        {
            c = c + numBottles;
            empty = numBottles + extra;
            numBottles = empty / numExchange;
            extra = empty - (numBottles * numExchange);
        }
        return c;
    }
};