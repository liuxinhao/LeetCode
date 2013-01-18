class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int minLength = 1000;
        
        string ret = "";
        if(strs.size() == 0)
        {
            return ret;
        }
        int flag = 1;
        for(int i=0; i < strs.size();i++)
        {
            minLength = min((int)strs[i].size(),minLength);
        }
        if(minLength == 0)
        {
            return ret;
        }
        for(int i = 0; i < minLength; i++)
        {
            char s = strs[0][i];
            for(int j = 1; j < strs.size();j++)
            {
                if(strs[j][i] - s != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                ret.push_back(s);
            }
            else
            {
                break;
            }
            
            
        }
        return ret;
        
    }
};
