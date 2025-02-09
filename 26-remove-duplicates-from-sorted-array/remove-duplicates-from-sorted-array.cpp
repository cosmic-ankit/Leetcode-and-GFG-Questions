class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int left = 0;
        int right = 1;
        int count = 0;

        while(right<nums.size())
        {
            if(nums[left]==nums[right])
            {
                cout<<"Removed";
                cout<<nums[right];
                nums.erase(nums.begin()+(right));
              

            }
            else 
            {
            count++;
            left++;
            right++;
            }
        }
        
        return count+1;

    }
        
    
};