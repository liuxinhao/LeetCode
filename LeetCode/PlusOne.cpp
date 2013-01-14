class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int carry = 0;
        int adding = 1;
       
        for( int i = digits.size() - 1; i >= 0; i--)
        {
            digits[i] = digits[i] + carry + adding;
            if(digits[i] > 9)
            {
                digits[i] = digits[i] - 10;
                adding = 0;
                carry = 1;
            }
            else
            {
                adding = 0;
                carry = 0;
            }
        }
        
        if(carry == 1)
        {
            vector<int> tmp;
            tmp.push_back(1);
            tmp.insert(tmp.end(),digits.begin(),digits.end());
            digits = tmp;
        }
        
       
        return digits;
    }
};
