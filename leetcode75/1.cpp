#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0;
        int word1_size = word1.length();
        int word2_size = word2.length();
        while(i < word1_size || i < word2_size)
        {
            if(i < word1_size)
                result += word1[i];
            if(i < word2_size)
                result += word2[i];
            i++;
        }
        return (result);      
    }
};


int main()
{
    Solution sol;
    string word1 = "abc";
    string word2 = "pqr";
    string mergedString = sol.mergeAlternately(word1 , word2);
    cout << mergedString << endl;
    return (0);
}
