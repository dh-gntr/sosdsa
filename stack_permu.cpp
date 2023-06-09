class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack<int> s;
        s.push(-1);
        int detect=0;
        int index=0;
        for(int i=0;i<N;i++)
        {
            //check top of stack
            detect=0;
            if(B[i]==s.top())
            {
                s.pop();
                detect=1;
                continue;
            }
            //checking which index of a matches b value
            for(int j=index; j<N; j++)
            {
                if(A[j]==B[i])
                {
                    index=j+1;
                    detect=1;
                    break;
                }
                else
                {
                    s.push(A[j]);
                }
            }
            if(detect==0)
            {
                break;
            }
            
        }
        return detect;
        
        
    }
};
