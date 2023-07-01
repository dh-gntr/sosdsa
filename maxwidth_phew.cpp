class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {

        queue<pair<TreeNode*, long int>> q;
        q.push({root,0});
        int ans=0;
        while(!q.empty())
        {
            int size = q.size();
            long int min = q.front().second;
            long int first,last;
            for(int i=0;i<size;i++)
            {
                long int curr_id = q.front().second - min;
                TreeNode* temp = q.front().first;
                q.pop();
                if(i==0)
                first = curr_id;
                if(i==size-1)
                last = curr_id;
                if(temp->left)
                q.push({temp->left, 2*curr_id + 1});
                if(temp->right)
                q.push({temp->right, 2*curr_id +2});


            }
            int width = last-first+1;

            ans = max(ans, width);
        }
        return ans;
    }
};
