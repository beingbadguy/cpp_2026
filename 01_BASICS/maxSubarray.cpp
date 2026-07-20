#include <iostream>
#include <vector>

using namespace std;

void printSubarray(vector<int> &nums, int size)
{
    for (int start = 0; start < size; start++)
    {

        for (int end = start; end < size; end++){

            for (int i = start; i <=end; i++){
                cout << nums[i]<<" ";
            }
            cout << " ";
        }
    }
    cout << endl;
}

// bruteforce appraoch 
int maxBruteSubarraySum(vector<int>&nums, int size){
    int maxSum = INT_MIN;
    for (int start = 0; start < size; start++){
        for (int end = start; end < size; end++){
            int currentSum = 0;
            for (int i = start; i <= end; i++){
                currentSum += nums[i];
            }
            maxSum = max(maxSum, currentSum);
        }
    }
    return maxSum;
}

// max sum array - > optimized approach 
int maxSubarraySum(vector<int> &nums, int size)
{

    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < size; i++)
    {
        currentSum += nums[i];
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    vector<int> nums = {1, 2, 3, -4, 5, 6, -12};
    int maxSum = maxSubarraySum(nums, nums.size());
    printSubarray(nums, nums.size());
    cout << "======" << endl;
    cout << "(OPTIMISED)The maximum subarray sum is : " << maxSum << endl;
    cout << "======" << endl;
    int maxSumBrute = maxBruteSubarraySum(nums, nums.size());
    cout << "======" << endl;
    cout << "(BRUTE)The maximum subarray sum is : " << maxSumBrute << endl;
    cout << "======" << endl;
}