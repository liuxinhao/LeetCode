class Solution {
public:
    int lengthOfLastWord(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len = strlen(s);
        int len1 = len;
        for(int i = len - 1; i >= 0; i--)
        {
            if(s[i] == ' ')
            {
                len1--;
            }
            else
            {
                break;
            }
            
        }
        int count = 0;
        for(int i = len1 - 1; i >= 0; i--)
        {
            if(s[i] != ' ')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
        
    }
};
