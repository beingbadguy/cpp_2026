#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// use the bruteforce approach
int bruteMajor(vector<int> nums, int size)
{

    int major;

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        major = nums[i];

        for (int j = 0; j < size; j++)
        {

            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            return major;
        }
    }
    return major;
}

// use the opimised approach
int optimisedMajor(vector<int> nums, int size)
{
    sort(nums.begin(), nums.end());
    int prev = nums[0];
    int element;
    int count = 0;
    for (int el : nums)
    {
        if (prev == el)
        {
            count++;
            element = el;
        }
        else
        {
            prev = el;
            count = 1;
        }
    }
    if (count > size / 2)
    {
        return element;
    }
    return element;
}

// moore's voting algorithm
int mooreAlgo(vector<int> nums, int size)
{

    int major = nums[0];
    int freq = 0;
    for (int val : nums)
    {

        if (freq == 0)
        {
            major = val;
            freq++;
        }
        else if (val == major)
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    if (freq > size / 2)
    {
        return major;
    }
    return major;
}

int main()
{
    // vector<int> nums = {7, 7, 2, 7, 3, 7, 4, 7, 5, 7, 7, 1, 7};
    vector<int> nums = {4, 2, 2, 1, 2, 3, 2, 2, 5, 2, 2};
    int majorElement = bruteMajor(nums, nums.size());
    // int majorElement = optimisedMajor(nums, nums.size());
    // int majorElement = mooreAlgo(nums, nums.size());
    cout << "=======" << endl;
    cout << "The majority element of this vector array is : " << majorElement << endl;
    cout << "=======" << endl;

    return 0;
}
