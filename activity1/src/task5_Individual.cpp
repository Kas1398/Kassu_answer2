// Here's the refactored answer.

#include <iostream>

int binarySearch(int nums[], int low, int high, int target)
{
    // Base case
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    // target value is found
    if (target == nums[mid])
    {
        return mid;
    }

    // if the target is less than the middle element, search the left half
    else if (target < nums[mid])
    {
        return binarySearch(nums, low, mid - 1, target);
    }

    // if the target is more than the middle element, search the right half
    else
    {
        return binarySearch(nums, mid + 1, high, target);
    }
}

int main()
{
    int nums[] = {2, 5, 6, 8, 9, 10};
    int target = 5;

    int n = sizeof(nums) / sizeof(nums[0]);
    int index = binarySearch(nums, 0, n - 1, target);

    if (index != -1)
    {
        std::cout << "Element found at index " << index << std::endl;
    }
    else
    {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
