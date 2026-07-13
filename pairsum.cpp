#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// use the bruteforce approach
vector<int> brutePairSum(vector<int> nums, int size, int key)
{

    vector<int> indexes;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == key)
            {
                indexes.push_back(i);
                indexes.push_back(j);
                return indexes;
            }
        }
    }
    return indexes;
}
// use the optimised approach

vector<int> optimisedPairSum(vector<int> nums, int size, int key)
{

    // works on the sorted array
    // first sort the array-> assuming that the vector is already sorted
    // and if not sorted then sort it as
    int start = 0;
    int end = size - 1;
    vector<int> indexes;

    while (start < end)
    {
        if (nums[start] + nums[end] == key)
        {
            indexes.push_back(start);
            indexes.push_back(end);
            return indexes;
        }
        else if (nums[start] + nums[end] > key)
        {
            end--;
        }
        else if (nums[start] + nums[end] < key)
        {
            start++;
        }
    }
    return indexes;
}

// create functon for each approach

// print the vector array

int main()
{
    vector<int> nums = {3, 5, 6, 9, 10};
    int key = 11;
    // vector<int> indexes = brutePairSum(nums, nums.size(), key);
    vector<int> indexes = optimisedPairSum(nums, nums.size(), key);

    cout << "======" << endl;
    cout << "These are the indexes : " << indexes[0] << ", " << indexes[1] << endl;
    cout << "These are the numbers : " << nums[indexes[0]] << ", " << nums[indexes[1]] << endl;
    cout << "======" << endl;
}
