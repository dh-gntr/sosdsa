void bfs(vector<int> &vis, vector<vector<int>>& graph, bool &ans,
    set<int> &a, set<int> &b, int node )
    {
        queue<int> q;
        a.insert(node);
        q.push(node);
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            vis[front] = true;
            int counta = 0;
            int countb = 0;
            for(auto i: graph[front])
            {
                if(!vis[i])
                q.push(i);
                if(a.count(i))
                counta++;
                if(b.count(i))
                countb++;

            }
            if(counta==0 && countb!=0)
            a.insert(front);
            else if(counta!=0 && countb==0)
            b.insert(front);
            else if(counta!=0 && countb!=0)
            {
                ans = false;
                break;
            }
        }

    }
    bool isBipartite(vector<vector<int>>& graph) {

        set<int> a;
        set<int> b;
        bool ans = true;

        

        
        vector<int> vis(graph.size(),false);

        for(int i=0;i<graph.size();i++)
        {
            if(!vis[i])
            bfs(vis, graph, ans, a, b,i);
        }
