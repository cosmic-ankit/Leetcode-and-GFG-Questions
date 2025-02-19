class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums)
    {
        int len = nums.size();
         vector<int> store(len);

         int i = 0;
         int neg =1;
         int pos = 0;

         while(i<len)
         {
            if(nums[i]>=0)
            {
                store[pos] = nums[i];
                pos+=2;
            }
            else {
                store[neg]= nums[i];
                neg+=2;
            }
            i++;
         }
        
    return store;
    }
};