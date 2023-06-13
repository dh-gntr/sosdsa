class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    
    void Merge(int* arr, int l, int r, int mid)
    {
        int i=0,j=0,k=0;
        int temp1[mid-l+1];
        int temp2[r-mid];
        int beg=l;
        //int end=r;
        
        for(i=0;i<mid-l+1;i++)
        {
            temp1[i]=arr[beg+i];
        }
        for(j=0;j<r-mid;j++)
        {
            temp2[j]=arr[mid+1+j];
        }
        i=0;
        j=0;
        k=beg;
        
        while(i<(mid-l+1)&& j< (r-mid))
        {
            if(temp1[i]<=temp2[j])
            {
                arr[k]=temp1[i];
                i++;
                k++;
            }
            else
            {
                arr[k]=temp2[j];
                j++;
                k++;
            }
        }
        
        while(i<(mid-l+1))
        {
            arr[k]=temp1[i];
            k++;
            i++;
        }
        
        while(j<(r-mid))
        {
            arr[k]=temp2[j];
            k++;
            j++;
        }
        
    }
    
    void MergeSort(int* arr, int l, int r)
    {
        int mid = (l+r)/2;
        if(l<r)
        {
        
        
        MergeSort(arr, l, mid);
        MergeSort(arr, mid+1, r);
        Merge(arr, l, r, mid);
        }
        
        
        
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        MergeSort(arr,l,r);
        return arr[k-1];
    }
   };
