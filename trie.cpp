void insert(struct TrieNode *root, string key)
{
    // code here
    
    int a= key[0]-'a';
    //base
    if(key.length()==1)
    {
        if(root->children[a]==NULL)
    {
        root->children[a]= getNode();
        root->children[a]->isLeaf = true;
        return;
    }
    else
    {
        root->children[a]->isLeaf = true;
        return;
    }
        
    }
    if(root->children[a]==NULL)
    {
        root->children[a]= getNode();
        insert(root->children[a],key.substr(1));
    }
    else
    {
        
        insert(root->children[a],key.substr(1));
    }
    
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    // code here
    //base
    int a = key[0]-'a';
    if(key.length()==1)
    {
        if(root->children[a]==NULL)
        {
            return false;
        }
        else
        {
            if(root->children[a]->isLeaf==true)
            return true;
            else
            return false;
        }
    }
    else
    {
        if(root->children[a]==NULL)
        return false;
        else
        {
            return search(root->children[a], key.substr(1));
        }
    }
}
