class Solution {
public:
    int maxsum(TreeNode* root)
    {
        if(root->right==NULL&&root->left==NULL)
        return root->val;
        int left=0;
        int right=0;
        if(root->left)
        left = maxsum(root->left);
        if(root->right)
        right = maxsum(root->right);
        return max(max(right,left) + root->val, root->val);
    }
    int solve(TreeNode* root)
    {
        
        int left=0;
        int right=0;
        if(root->left)
        left = maxsum(root->left);
        if(root->right)
        right = maxsum(root->right);
        return max(left+right+root->val, max(left+root->val, right+root->val));
    }
    int maxPathSum(TreeNode* root) {
       if(root==NULL)
       return INT_MIN;
       
       int left =  maxPathSum(root->left);
       int right = maxPathSum(root->right);
       int node = root->val;
       int root_incl = solve(root);//max sum with root incl

       return max(left, max(right,max(node,root_incl)));
    }
