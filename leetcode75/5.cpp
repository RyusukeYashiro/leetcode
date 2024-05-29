#include <string>
#include <iostream>
using namespace std;

//双方向ポインタ
bool solve(char c)
{
    string s = "aiueoAIUEO";
    for(int i = 0; i < s.size(); i++)
    {
        if(c == s[i])
            return (true);
    }
    return (false);
}
class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() - 1;
        while(right > left)
        {
            while(right > left && !solve(s[left]))
                left++;
            while(right > left && !solve(s[right]))
                right--;
            if(right > left)
            {
                swap(s[left] , s[right]);
                left++;
                right--;
            }
        }
        return (s);
    }
};

int main(int ac , char*av[])
{
    Solution sol;
    string s = av[1];
    //luminous -> lumonius
    string ans = sol.reverseVowels(s);
    cout << ans << endl;
    return (0);
}