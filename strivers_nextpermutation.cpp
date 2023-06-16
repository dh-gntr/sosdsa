class Solution {
public:

    bool permute(int start, vector<int> &nums)
    {
        //base case
        
        if(start==nums.size()-2)
        {
            if(nums[start]<nums[start+1])
            {
                int temp = nums[start];
                nums[start]=nums[start+1];
                nums[start+1]=temp;
                return true;
            }
            else
            return false;
        }

        bool ispermutable = permute(start+1,nums);
        
        if(ispermutable == true)
        return true;
        else
        {
            
            int index = -1;
        for(int i= start; i< nums.size();i++)
        {
            if(nums[i]>nums[start])
            {
                
                index = i;
            }
        }
           if(index==-1)
           return false;
           else
           {
                int t = nums[index];
                nums[index]=nums[start];
                nums[start]=t;
                sort(nums.begin()+start+1, nums.end());
                return true;
           }


        }


    }
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        int start=0;
        if(n==1)
        return;
        bool permutable = permute(start, nums);
        if(!permutable)
        reverse(nums.begin(), nums.end());
        return;
        
        
    }
};
