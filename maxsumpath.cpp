int maxpath(TreeNode* root, int &maxi)
    {
        if(root==NULL)
        return 0;
        int left = max(maxpath(root->left,maxi),0);
        int right = max(maxpath(root->right,maxi),0);
        maxi = max(maxi, left+right+root->val);
        return max(left,right)+root->val;
    }
    int maxPathSum(TreeNode* root)
    {
        int maxi=INT_MIN;
        maxpath(root,maxi);
        return maxi;
    }
