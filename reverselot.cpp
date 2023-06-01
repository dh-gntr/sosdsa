#include<stack>
 #include<queue>
 #include<vector>
 using namespace std;
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {

        vector<vector<int>> v;
        stack<TreeNode*> s;
        queue<TreeNode*> q;
        int level = 0;
        q.push(root);
        s.push(root);
        q.push(NULL);
        s.push(NULL);
        while(!q.empty())
        {
            TreeNode* temp;
            temp = q.front();
            q.pop();
            if(temp == NULL)
            {
            if(!q.empty())
            {
            q.push(NULL);
            s.push(NULL);
            }
            }
            else
            {
                
            if(temp->right)
            {
            q.push(temp->right);
            s.push(temp->right);
            }
            if(temp->left)
            {q.push(temp->left);
            s.push(temp->left);}
            
            }
        }
        s.pop();
        while(!s.empty())
        {
            TreeNode* top = s.top();
            s.pop();
            if(top != NULL)
            {
                v[level].push_back(top->val);
            }
            else
            {
                level++;
            }

        }

        return v;


        }

      
        
    };
