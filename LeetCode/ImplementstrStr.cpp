class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len1 = strlen(haystack);
        int len2 = strlen(needle);
        if(len1 == 0 && len2 == 0)
        {
            return haystack;
        }
        if(len1 == 0 || len2 > len1)
        {
            return NULL;
        }
        for(int i = 0; i < len1 - len2 + 1; i++)
        {
            int flag = 1;
            for(int j = 0; j < len2; j++)
            {
                if(haystack[i+j] != needle[j])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                return &haystack[i];
            }
        }
        return NULL;
        
    }
};
