class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int findht(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            int left = findht(root->left);
            int right=findht(root->right);
            return max(left,right)+1;
        }
    }
    bool balanced(Node* root)
    {
       
       if(root==NULL)
       return true;
       int lefth = findht(root->left);
       int righth = findht(root->right);
       
           bool left = balanced(root->left);
           bool right = balanced(root->right);
           bool third = abs(lefth-righth)<=1;
           if(left&&right&&third)
           return true;
           else
           return false;
           
       
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        
        return balanced(root);
        
    }
};
