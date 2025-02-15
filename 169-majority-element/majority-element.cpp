class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count = 0;
        int store;

        for(int i = 0; i<nums.size();i++)
        {
            if(count==0)
            {
                store = nums[i];
                count++;
                continue;
            }
            if(store==nums[i])
            {
                count++;
            }
            else{
                count--;
            }
        }
        
    return store;
    }
};