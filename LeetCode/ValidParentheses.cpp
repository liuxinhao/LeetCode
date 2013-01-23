class Solution {
public:
    bool isValid(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        stack<char> stk;
        if(s.length() % 2 == 1)
        {
            return false;
        }
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stk.push(s[i]);
            }
            else
            {
                if(!stk.empty() && s[i] == ')' )
                {
                    if(stk.top() == '(')
                    stk.pop();
                }
                else if(!stk.empty() && s[i] == ']' )
                {
                    if(stk.top() == '[')
                    stk.pop();
                }
                else if(!stk.empty() && s[i] == '}' )
                {
                    if(stk.top() == '{')
                    stk.pop();
                }
                else if(stk.empty())
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
            
        }
        if(stk.empty())
        {
            return true;
        }
        else
        {
            return false;
        }

        
    }
};
