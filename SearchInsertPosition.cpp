int searchInsert(vector<int>& nums, int target)
    {
      int left=0;
      int right=nums.size()-1;
      while(left<=right)
      {
        int middle=(left+right)/2;
        if(target==nums[middle])
        {
            return middle;
        }
        else if (target>nums[middle])
        {
         left=middle+1;
        }
         else if(target<nums[middle])
        {
         right=middle-1;
        }
      }
      return left;
    }
