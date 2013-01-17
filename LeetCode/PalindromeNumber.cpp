class Solution {
public:
    bool isPalindrome(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(x < 0)
        {
            return false;
        }

   
        vector<int> digits;
        while(x)
        {
            digits.push_back(x % 10);
            x /= 10;
        }
        int end = digits.size() - 1;
        int mid = digits.size() / 2 ;
        for(int i = 0; i < mid; i++)
        {
            if(digits[i] != digits[end-i])
            {
                return false;
            }
        }
        return true;
        
    }
};
