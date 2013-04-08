class Solution {
public:
    string addBinary(string a, string b) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool hasCarry = false;
      int a_size = a.size();
    	int b_size = b.size();
    	int t = abs(a_size-b_size);
    	int m = max(a_size,b_size);
    	string c = a_size >= b_size ? a : b;
    	string d = a_size >= b_size ? b : a;
    	string ret = "";
    	//cout<<t<<", "<<m<<endl;
    	//cout<<c<<endl;
    	//cout<<d<<endl;
    	int i;
    	for( i = m-1; i-t >= 0; i--)
    	{
    		//cout<<"c:"<<c[i]<<endl;
    		//cout<<"d:"<<d[i-t]<<endl;
    		if(c[i] == '1' && d[i-t] == '1')
    		{
    			if(hasCarry)
    			{
    				ret.append("1");
    				hasCarry = true;
    			}
    			else
    			{
    				ret.append("0");
    				hasCarry = true;
    			}
    		}
    		else if(c[i] == '0' && d[i-t] == '0' )
    		{
    			if(hasCarry)
    			{
    				ret.append("1");
    				hasCarry = false;
    			}
    			else
    			{
    				ret.append("0");
    				hasCarry = false;
    			}
    		}
    		else
    		{
    			if(hasCarry){
    				ret.append("0");
    				hasCarry = true;
    			}
    			else
    			{
    				ret.append("1");
    				hasCarry = false;
    			}
    		}
    	}
    	for(int j = i; j>=0;j--)
    	{
    		if(c[j] == '1' && hasCarry)
    		{
    			ret.append("0");
    			hasCarry = true;
    		}
    		else if((c[j] == '0' && hasCarry) || (c[j] == '1' && !hasCarry))
    		{
    			ret.append("1");
    			hasCarry = false;
    		}
    		else
    		{
    			ret.append("0");
    			hasCarry = false;
    		}
    	}
    	if(hasCarry)
    	{
    		ret.append("1");
    	}
    	string tekst = string ( ret.rbegin(), ret.rend() );

    	return tekst;

        
    }
};
