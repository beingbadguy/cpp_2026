#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// bruteforce
int bruteStock(vector<int> &prices, int size)
{
    int maxProfit = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int currentProfit = prices[j] - prices[i];
            maxProfit = max(maxProfit, currentProfit);
        }
    }
    return maxProfit;
}

// optimal approach
int optimalStock(vector<int> &prices,int size ){

    int maxProfit = 0;
    int tempElement = prices[0];
    for (int i = 1; i < size; i++){

        tempElement = min(prices[i], tempElement);
        int currentProfit = prices[i] - tempElement;
        maxProfit = max(maxProfit, currentProfit);
    }
    return maxProfit;
}


int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    // max profit is 5 right ?
    int maxProfit = bruteStock(prices, prices.size());
    cout << "======" << endl;
    cout << "The max profit is: " << maxProfit << endl;
    cout << "======" << endl;

    return 0;
}
