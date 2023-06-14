class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        unordered_map<long long int,long long int> m;
        long long int sum=0;
        long long int one = 1;
        m[0]=1;
        for(int i=0;i<n;i++)
        {
           sum+= arr[i];
           if(m.count(sum)==0)
           m[sum]=1;
           else
           m[sum]=m[sum]+1;
        }
        
        long long int counter =0;
        
        for(auto i: m)
        {
           if(i.second>1)
           {
               long long int k = i.second;
               counter += k*(k-1)/2;
           }
        }
        
        return counter;
        
        
        
    }
};
