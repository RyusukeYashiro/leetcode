#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_hold = 0;
        vector<bool>hold;
        for(int i = 0; i < candies.size(); i++)
        {
            if(max_hold < candies[i])
                max_hold = candies[i];
        }
        for(int i = 0; i < candies.size(); i++)
        {
            if(max_hold <= candies[i] + extraCandies)
                hold.push_back(true);
            else
                hold.push_back(false);
        }
        return (hold);
    }
};

int main(void)
{
    Solution sol;
    vector<int> candies{2,3,5,1,3};
    int extraCandies = 3;
    vector<bool>result = sol.kidsWithCandies(candies , extraCandies);
    for(auto c : result)
    {
        cout << (c ? "true" : "false") << " ";
    }
    cout << endl;
    return (0);
}