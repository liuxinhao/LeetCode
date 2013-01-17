class Solution {
public:
    int reverse(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int sign = x > 0 ? 1 : -1;
        int result = 0;
        x = abs(x);
        while(x)
        {
            result *= 10;
            result += x % 10;
            x /= 10;
        }
        return sign*result;
       
      
    }
};
