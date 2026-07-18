#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int bruteMost(vector<int> &heights, int size)
{

    int maxArea = 0;

    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            int minHeight = min(heights[i], heights[j]);
            int width = j - i;
            int currentArea = minHeight * width;
            maxArea = max(maxArea, currentArea);
        }
    }
    return maxArea;
}

// write the optimal approach as well ->
int optMost(vector<int> &heights, int size)
{
    int start = 0;
    int end = size - 1;
    int maxArea = 0;

    while (start < end)
    {
        int minHeight = min(heights[start], heights[end]);
        int width = end - start;
        int currentArea = width * minHeight;
        maxArea = max(currentArea, maxArea);
        if (heights[start] > heights[end])
        {
            end--;
        }
        else
        {

            start++;
        }
    }
    return maxArea;
}

int main()
{
    vector<int> heights = {1, 3, 2, 5, 25, 24, 5};
    int area = bruteMost(heights, heights.size());
    cout << "=======" << endl;
    cout << "The container with the most water has the area : " << area << endl;
    cout << "=======" << endl;
}