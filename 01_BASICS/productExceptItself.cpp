#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> bruteExcept(vector<int> &nums, int size)
{
    vector<int> newVec(size);
    for (int i = 0; i < size; i++)
    {
        int temp = 1;

        // using division
        // for (int j = 0; j < size; j++){
        //     temp = nums[j] * temp;
        //     newVec[i] =  temp / nums[i];
        // }
        // without using division
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {

                temp = nums[j] * temp;
                newVec[i] = temp ;
            }
        }
    }
    return newVec;
}

// this needs to be optimised to O(n) time complexity and O(1) space complexity. The current implementation uses O(n) space for the prefix and suffix arrays. We can achieve the same result by calculating the product in a single pass without using extra space for prefix and suffix arrays.
vector<int> optimisedProduct(vector<int> &nums, int size){
    vector<int> prefix(size);
    vector<int> suffix(size);

    vector<int> result(size);

    prefix[0] = 1;
    for (int i = 1; i < size;i++){
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    suffix[size - 1] = 1;

    for (int j = size - 2; j >= 0; j--){
        suffix[j] = suffix[j + 1] * nums[j + 1];
    }

    for (int i = 0; i < size; i++){
        result[i] = prefix[i] * suffix[i];
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    // vector<int> upgratedVector = bruteExcept(nums, nums.size());
    vector<int> upgratedVector = optimisedProduct(nums, nums.size());
    cout << "=======" << endl;
    for (int vals : upgratedVector)
    {
        cout << vals << " ";
    }
    cout << endl
         << "=======" << endl;
}