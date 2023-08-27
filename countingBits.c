/*
338. Counting Bits
Easy
9.3K
448
Companies
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
 

Constraints:

0 <= n <= 105
 

Follow up:

It is very easy to come up with a solution with a runtime of O(n log n). Can you do it in linear time O(n) and possibly in a single pass?
Can you do it without using any built-in function (i.e., like __builtin_popcount in C++)?
Accepted
834.9K
Submissions
1.1M
Acceptance Rate
76.3%
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* countBits(int n, int* returnSize){
    * returnSize = n + 1;
    int *ans = malloc(sizeof(int)*(*returnSize));
    ans[0] = 0;
    for(int i = 1; i<(* returnSize); i++){
        int cnt = 0, j = i;
        while(j){
            cnt++;
            j = j & (j-1);  
        }
        ans[i] = cnt;
    }
    return ans;
}

int main() {

    return 0;
}