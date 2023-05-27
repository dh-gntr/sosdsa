#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> store;
    for(int i = 0; i<s.length(); i++)
    {
      //int j = i;

      char ch=s[i];
      if (ch != ')') {
        store.push(ch);
      }
      else
      {
          //if(store.top()!='(')
          //{
            bool redundant = true;
            char top = store.top();
            while (top != '(')
            {
              if(top =='+'|| top =='-'|| top =='\' || top =='*')
              {
          redundant = false;}
              store.pop();
            }
            store.pop();
          //}
          //else
          //return true;
          if(redundant == true)
          return true;
      }
    }
    return false;
}
