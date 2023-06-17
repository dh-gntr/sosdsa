class Solution {
public:

    
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int start=0;
        for(int i=n;i>=2;i=i-2)
        {
            
            
            for(int j=0;j<=i-2;j++)
            {
                int temp = matrix[i-1-j+start][0+start];
                matrix[i-1-j+start][0+start]=matrix[i-1+start][i-1-j+start];
                matrix[i-1+start][i-1-j+start]=matrix[j+start][i-1+start];
                matrix[j+start][i-1+start]=matrix[0+start][j+start];
                matrix[0+start][j+start]=temp;
            }
            start++;
        }
        
    }
};
