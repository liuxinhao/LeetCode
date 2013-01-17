class Solution {
public:
    int atoi(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int i = 0;
        long long ret = 0;
        int sign = 1;
        while(str[i] != '\0' && str[i] == ' ')
        {
            i++;
        }
        if(str[i] == '+')
        {
            sign = 1;
            i++;
        }
        else if (str[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if (str[i] < '0' || str[i] > '9')
        {
            return 0;
        }
        
        while(str[i] != '\0')
        {
            if(str[i] >= '0' && str[i] <= '9')
            {
               ret *= 10;
               ret += str[i] - '0';
            }
            else
            {
                break;
            }
            i++;
        }
              
        ret = sign * ret;
        if (ret > INT_MAX) ret = INT_MAX;
        if (ret < INT_MIN) ret = INT_MIN;
        return ret;
        
    }
};
