class Solution {
  public:
    Node* findparents(Node* root, int target, unordered_map<Node*, Node*> &parents)
    {
        queue<Node*> q;
        q.push(root);
        parents[root] = NULL;
        Node* ans;
        while(!q.empty())
        {
            Node* front = q.front();
            q.pop();
            if(front->left)
            {
            q.push(front->left);
            parents[front->left] = front;
            }
            if(front->right)
            {
            q.push(front->right);
            parents[front->right] = front;
            }
            if(front->data == target)
            ans = front;
            
            
        }
        return ans;
    }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        unordered_map<Node*, Node*> parents;
        Node* found = findparents(root, target, parents);
        int time=0;
        unordered_map<Node*, bool> vis;
        queue<Node*> q;
        
        q.push(found);
        while(!q.empty())
        {
            int n = q.size();
            time++;
            for(int i=0;i<n;i++)
            {
            Node* front = q.front();
            q.pop();
            vis[front] = true;
            if(front->left && !vis[front->left])
            {
                q.push(front->left);
            }
            if(front->right && !vis[front->right])
            {
                q.push(front->right);
            }
            if(parents[front] && !vis[parents[front]])
            {
                q.push(parents[front]);
            }
            }
            
            
        }
        
        return time-1;
        
        
    }
};
