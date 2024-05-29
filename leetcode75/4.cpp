#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        if (len == 0) return (n == 0);
        if (len == 1)
        {
            if (flowerbed[0] == 0)
                return (n <= 1);
            else
                return (n == 0);
        }
        for (int i = 0; i < len && n > 0; i++)
        {
            if (flowerbed[i] == 0)
            {
                if (i == len - 1)
                {
                    if (i == 0 || flowerbed[i - 1] == 0)
                    {
                        flowerbed[i] = 1;
                        n--;
                    }
                } else {
                    if (flowerbed[i + 1] == 0)
                    {
                        if (i == 0 || flowerbed[i - 1] == 0)
                        {
                            flowerbed[i] = 1;
                            n--;
                        }
                    }
                }
            }
        }
        return (n == 0);
    }
};

int main(void)
{
    Solution sol;
    vector<int>flowred{1,0,0,0,1,0,0};
    //vector<int>flowred (1,0);
    //vector<int>flowred = {1,0,1,0,1,0,1};
    int n = 1;
    cout << sol.canPlaceFlowers(flowred , n);
    return (0);
}