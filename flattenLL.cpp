class Solution {
public:
    void flatten(TreeNode* root) {

        vector<int> ans;
        TreeNode *current = root;
        while(current!=NULL)
        {
            if(current->left == NULL)
            {
                ans.push_back(current->val);
                current = current->right;
            }
            else
            {
                TreeNode* pred = current->left;
                while(pred->right != NULL && pred->right!=current)
                {
                    pred = pred->right;

                }
                if(pred->right == NULL)
                {
                    ans.push_back(current->val);
                    pred->right = current;
                    current = current->left;
                }
                else
                {
                    pred->right = NULL;
                    current = current->right;
                }
            }
        }

        current = root;


        for(int i=1;i<ans.size();i++)
        {
            TreeNode* node = new TreeNode(ans[i], NULL, NULL);
            current->right = node;
            current->left = NULL;
            current = current->right;

        }

        root = current;
        
    }
};
