class Solution {
public:
    bool isNumber(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        while (*s == ' ') {
  	s++;
	}
	if (*s == '+' || *s == '-')
		s++;
	bool hasNum = false;
	while (*s >= '0' && *s <= '9') {
		hasNum = true;
		s++;
	}
	if (*s == '.') {
		s++;
		while (*s >= '0' && *s <= '9') {
			hasNum = true;
			s++;
		}
	}
	if (!hasNum)
		return false;
	if (*s == 'e' || *s == 'E') {
		s++;
		if (*s == '+' || *s == '-')
			s++;

		hasNum = false;
		while (*s >= '0' && *s <= '9') {
			hasNum = true;
			s++;
		}

		if (!hasNum)
			return false;
	}

	while(*s == ' ') s++;


	return *s == '\0';
        
    }
};
