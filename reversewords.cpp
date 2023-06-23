class Solution {
public:
    
        
    

    string reverseWords(string s)
    {
        vector<vector<char>> answer;
        vector<char> sub;
        //int index=0;
        int start;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                start = i;
                break;
            }
        }
        for(int i=start; i<s.length();i++)
        {
            if(i<s.length()-1 && s[i]==' '&& s[i+1]!=' ')
            {
                //index++;
                answer.push_back(sub);
                sub.clear();


            }
            else if(s[i]!=' ')
            {
                sub.push_back(s[i]);
            }

        }
        answer.push_back(sub);
        int i=0;
        int j=answer.size()-1;
        while(i<j)
        {
            vector<char> temp = answer[i];
            answer[i] = answer[j];
            answer[j] = temp;
            i++;
            j--;
        }

        string result;
        for(int i=0;i<answer.size();i++)
        {
            for(int j=0;j<answer[i].size();j++)
            {
                result.push_back(answer[i][j]);
            }
            result.push_back(' ');
        }
        result.pop_back();
        return result;
    }
};
