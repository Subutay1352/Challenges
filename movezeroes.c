/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Could you minimize the total number of operations done?
Accepted
2.4M
Submissions
3.9M
Acceptance Rate
61.4%
*/

#include <stdio.h>
#include <stdbool.h>

int nums[] = {1,3,4,0,8,6,9,1,0};

void swap(int* a, int* b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

void moveZeroes(int* nums, int numsSize){
  int zeroCount = 0;
  bool is_zero = false;
  for (size_t i = 0; i < numsSize; i++)
  {
    if (nums[i] != 0 && is_zero)
    {
      swap(&nums[i], &nums[zeroCount++]);
    }
    else if (nums[i] == 0 && !is_zero)
    {
      is_zero = true;
      zeroCount = i;
    }
  }
}

int main() {

    int count = sizeof(nums)/sizeof(nums[0]);

    for (size_t i = 0; i < count; i++)
    {
        printf("%d,",nums[i]);
    }
    printf("\n");

    moveZeroes(nums,count);

    for (size_t i = 0; i < count; i++)
    {
        printf("%d,",nums[i]);
    }
    printf("\n");

    return 0;
}