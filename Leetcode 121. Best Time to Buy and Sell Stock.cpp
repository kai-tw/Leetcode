/**
 * Idea: 2 pointer approach.
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = 0, left = 0, right = 1;
      
        while (left < prices.size() && right < prices.size()) {
            int leftVal = prices[left];
            int rightVal = prices[right];

            if (leftVal < rightVal) {
                int profit = rightVal - leftVal;
                price = profit > price ? profit : price;
            } else {
                left = right;
            }
          
            right++;
        }
      
        return price;
    }
};
