// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;

class twostack
{
    int size;
    int top1;
    int top2;
    int *arr;
    public:
    twostack(int s)
    {
        size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    
    
    
    void push1(int n)
    {
        if(top1 +1 != top2 )
        {
        top1++;
        arr[top1]=n;
        }
        else
        cout<<"stack overflow";
    }
    
    void push2(int n)
    {
        if(top2 +1 != top1 )
        {
        top2--;
        arr[top2]=n;
        }
        else
        cout<<"stack overflow";
    }
    
    void pop1()
    {
        if(top1 != -1)
        {
            top1--;
        }
        else
        cout<<"stack underflow";
    }
    
    void pop2()
    {
        if(top2 != size)
        {
            top2++;
        }
        else
        cout<<"stack underflow";
    }
    
    
};

int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    twostack t(6);
    //t.push1(3);
    //t.push2(5);
    t.pop1();
    t.pop2();
    t.pop1();
    t.pop2();
    

    return 0;
}
