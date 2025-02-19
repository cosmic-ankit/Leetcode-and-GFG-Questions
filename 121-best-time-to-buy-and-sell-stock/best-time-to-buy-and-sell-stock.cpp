class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int smallest = prices[0];
        int store = 0;

        for(int i = 1; i<prices.size(); i++)
        {
            
            if(prices[i]<smallest)
            {
                smallest = prices[i];
            }
            else 
            {
                int sum = prices[i]-smallest;
                if(store<sum)
                {
                    store= sum;
                }

            }

        }
        return store;
        
    }
};