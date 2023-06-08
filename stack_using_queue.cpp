void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code
        if(q1.size()!=0)
        {
            while(q1.size()!=1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            int temp = q1.front();
            q1.pop();
            while(q2.size()!=0)
            {
                q1.push(q2.front());
                q2.pop();
            }
            return temp;
        }
        else
        return -1;
}
