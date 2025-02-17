class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int store = nums[0];

        int sum = nums[0];


        for(int i = 1; i<nums.size();i++)
        {
            if(nums[i]>store+nums[i])
            {
                store=nums[i];
                

            }
            else {
                store=store+nums[i];

            }
            if(sum<=store)
                {
                    sum=store;
                }
        }
        return sum;

        
    }
};