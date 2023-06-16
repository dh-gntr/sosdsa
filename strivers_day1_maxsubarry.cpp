class Solution {
public:
    

    int maxSubArray(vector<int> &nums)
    {
          int n = nums.size();
          int start =0;
          int arr[n];
          int sum=0;
          for(int i=0;i<n;i++)
          {
              sum += nums[i];
              arr[i]=sum;
          }

          int max[n];

          max[n-1]=arr[n-1];
          for(int j=n-2;j>=0;j--)
          {
              if(arr[j]>max[j+1])
              max[j]=arr[j];
              else
              max[j]=max[j+1];
          }

          for(int i=1;i<n;i++)
          {
              max[i]=max[i]-arr[i-1];
          }

          int ans=max[0];
          for(int i=1;i<n;i++)
          {
              if(max[i]>ans)
              ans=max[i];
          }

          return ans;
    }
};
