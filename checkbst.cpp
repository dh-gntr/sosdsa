class Solution {
public:
    bool check(TreeNode* root, long  min, long  max)
    {
        if(root==NULL)
        return true;

       if(root->val>min && root->val<max)
       {
           return check(root->left,min,root->val) && 
                  check(root->right,root->val,max);
       }
       return false; 
    }
    bool isValidBST(TreeNode* root) {
        long int min = -2147483649;
        long int max = 2147483648;
        bool ans = check(root,min,max);
        
        return ans;
        
    }
};
