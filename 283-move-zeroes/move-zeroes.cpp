class Solution 
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int i= 0;
        int j = 1;
        while(i<nums.size() && nums[i]!=0)
        {
            i++;
            
        }
        j=i;
        while( j<nums.size() && nums[j]==0 )
        {
            j++;
        }

        while(j<nums.size() && i<nums.size())
        {
            int temp = nums[j];
            nums [j] = nums[i];
            nums[i] = temp;

            while(i<nums.size() && nums[i]!=0)
            {
                i++;
            }
            while(j<nums.size() && nums[j]==0)
            {
                j++;
            }

        }     
    }
};