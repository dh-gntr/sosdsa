void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code
        if(s1.size()!=0)
        {
            while(s1.size()!=1)
            {
                s2.push(s1.top());
                s1.pop();
            }
            int temp = s1.top();
            s1.pop();
            while(s2.size()!=0)
            {
                s1.push(s2.top());
                s2.pop();
            }
            return temp;
        }
        else
        return -1;
}
