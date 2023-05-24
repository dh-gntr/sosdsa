#include <iostream>
using namespace std;

struct stack
{
    int value;
    stack* pointer;
};

 stack* top = NULL;
 
 void push(int n)
 {
     stack* temp = new stack();
     temp->pointer = top;
     temp->value = n;
     top = temp;
     
 }
 
 void pop()
 {
     if(top != NULL)
     {
         stack* temp = top;
         top = top->pointer;
         delete temp;
        
     }
 }
 
 bool isEmpty()
 {
    if(top==NULL)
    return true;
    else
    return false;
 }
 int peek()
 {
     if(top!= nullptr)
     return top->value;
     else
     cout<<"stack empty"<<endl;
 }
 int main()
 {
     push(4);
     push(2);
     pop();
     pop();
     int n = peek();
     cout<<peek();
     cout<<isEmpty();
 }
