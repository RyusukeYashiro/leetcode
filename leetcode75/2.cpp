#include <string>
#include <iostream>
using namespace std;

class Solution {
    public:
        string gcdOfStrings(string str1, string str2) { 
            for(int len = str2.length(); len > 0; len--)
            {
                string candidate = str2.substr(0,len);
                if(solve(str1 , candidate) && solve(str2 , candidate))
                    return (candidate);
            }
            return ("");
        }
    bool solve(string s, string part)
    {
        if(s.length() % part.length() != 0)
            return (false);
        for(int i = 0; i < s.length(); i += part.length())
        {
            if(s.substr(i,part.length()) != part)
                return (false);
        }
        return (true);
    }
};

    int main(void)
    {
        Solution sol;
        string str1 = "TAUXXTAUXXTAUXXTAUXXTAUXX";
        string str2 = "TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX";
        cout << sol.gcdOfStrings(str1 , str2) << endl;
    }