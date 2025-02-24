// 动态更新+遍历解法
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int len = prices.size();
        if (len <= 1)
        {
            return 0;
        }

        int buy_pri = prices[0];
        int max_profit = 0;
        for (int i = 1; i < len; i++)
        {
            if (prices[i] < buy_pri)
            {
                buy_pri = prices[i];
            }
            else
            {
                int profit = prices[i] - buy_pri;
                max_profit = max(max_profit, profit);
            }
        }
        return max_profit;
    }
};