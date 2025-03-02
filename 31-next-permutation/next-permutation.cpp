class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
         int len = nums.size()-1;
         int it = len-1;
         int index = -1;

         while(it>=0)
         {
            if(nums[it]<nums[it+1])
            {
                index = it;
                break;
            }
            it--;
         }
         if(it==-1)
         {
           return reverse(nums.begin(),nums.end());
         }
         else {
            int i = len;
            while(index<i)
            {
                if(nums[i]>nums[index])
                {
                    swap(nums[index],nums[i]);
                    break;
                }
                i--;
            }

           return reverse(nums.begin()+index+1, nums.end());
         }

        
    }
};